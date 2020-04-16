// in the name of God

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

int cnt[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int mx = 1;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        for (int j = 1; j * j <= x; j++) {
            if (x % j != 0)
                continue;
            cnt[j]++;
            if (cnt[j] > 1)
                mx = max(mx, j);
            if (x / j != j) {
                cnt[x / j]++;
                if (cnt[x / j] > 1)
                    mx = max(mx, x / j);
            }
        }
    }
    cout << mx << endl;
    return 0;
}
