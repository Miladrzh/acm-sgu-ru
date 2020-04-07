// in the name of God
// Young fire burn

# include <bits/stdc++.h>

using namespace std;

# define pb push_back
# define slark cerr << "slark" << endl;
# define dagon cout << endl;
# define XX first
# define YY second
# define err(x) cout << #x << " is: " << x << endl;
# define Wait() int _; cin >> _;

typedef long long ll;
typedef vector<int> vint;
typedef pair<int, int> pii;

const double PI = 3.1415931;
const double eps = 1e-9;

const int maxN = 100000;
int a[maxN], n;
ll ans;

void merge(int begin, int end) {
    int mid = (end + begin) / 2;
    int pnt1 = begin, pnt2 = mid;
    vector<int> tmp;
    while (pnt1 < mid or pnt2 < end) {
        if (pnt1 == mid) {
            tmp.pb(a[pnt2]);
            pnt2++;
        } else if (pnt2 == end) {
            ans += (pnt2 - mid);
            tmp.pb(a[pnt1]);
            pnt1++;
        } else {
            if (a[pnt2] < a[pnt1]) {
                tmp.pb(a[pnt2]);
                pnt2++;
            } else {
                tmp.pb(a[pnt1]);
                pnt1++;
                ans += (pnt2 - mid);
            }
        }
    }
    for (int i = 0; i < end - begin; i++) {
        a[i + begin] = tmp[i];
    }
    return;
}

void merge_sort(int begin, int end) {
    if (end - begin <= 1)
        return;
    int mid = (begin + end) / 2;

    merge_sort(begin, mid);
    merge_sort(mid, end);
    merge(begin, end);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    merge_sort(0, n);
    cout << ans << endl;
    return 0;
}
