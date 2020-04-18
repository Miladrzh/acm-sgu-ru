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
int dp[maxN], profit[maxN];
vector<int> v[maxN];
bool mark[maxN];

void dfs(int x) {
    mark[x] = true;
    dp[x] = profit[x];

    for (int nei:v[x]) {
        if (!mark[nei]) {
            dfs(nei);
            if (dp[nei] > 0) {
                dp[x] += dp[nei];
            }
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> profit[i];
    for (int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(1);
    cout << *max_element(dp + 1, dp + 1 + n) << endl;
    return 0;
}
