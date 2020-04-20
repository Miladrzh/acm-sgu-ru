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

const int maxM = 1000 + 10;
const int maxN = 10000 + 10;
bool mark[maxM], dp[maxN][maxM], use[maxN][maxM];
int from[maxN][maxM];

// O(M^2)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vint v;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v.pb(x % m);
        dp[v.size() - 1][x % m] = true;
        use[v.size() - 1][x % m] = true;
        from[v.size() - 1][x % m] = -1;
    }

    for (int i = 1; i < v.size(); i++) {
        for (int j = 0; j < m; j++) {
            if (dp[i - 1][j]) {
                dp[i][(v[i] * j) % m] = true;
                use[i][(v[i] * j) % m] = true;
                from[i][(v[i] * j) % m] = j;

                dp[i][j] = true;
                use[i][j] = false;
                from[i][j] = j;
            }
        }
    }
    int ans;
    for (int i = m - 1; i >= 0; i--) {
        if (dp[v.size() - 1][i]) {
            ans = i;
            break;
        }
    }
    if (ans == 0) {
        cout << 1 << endl;
        return 0;
    }
    vint levelers;
    int pos = v.size() - 1, curMod = ans;
    while (curMod != -1) {
        if (use[pos][curMod])
            levelers.pb(pos);
        curMod = from[pos][curMod];
        pos--;
    }
    sort(levelers.begin(), levelers.end());
    cout << ans << endl;
    for (int index:levelers) {
        cout << index + 1 << " ";
    }
    cout << endl;
    return 0;
}
