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

const int maxN = 16000 + 10;
pii p[maxN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].XX >> p[i].YY;
    }

    sort(p + 1, p + 1 + n);

    int curStart = p[1].XX;
    int curEnd = p[1].YY;

    int redundant = 0;
    for (int i = 2; i <= n; i++) {
        if (p[i].XX == curStart and p[i].YY >= curEnd) {
            redundant++;
            curStart = p[i].XX;
            curEnd = p[i].YY;
        } else if (p[i].XX > curStart and p[i].YY <= curEnd) {
            redundant++;
        } else {
            curStart = p[i].XX;
            curEnd = p[i].YY;
        }
    }

    cout << redundant << endl;
    return 0;
}
