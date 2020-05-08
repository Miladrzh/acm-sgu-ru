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

const int maxN = 200 + 10;
vint v[maxN];
int mark[maxN];
bool can = true;

void dfs(int x, int color) {
    mark[x] = color;

    for (int nei:v[x]) {
        if (!mark[nei]) {
            dfs(nei, 3 - mark[x]);
        } else if (mark[nei] == mark[x]) {
            can = false;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }

    for (int i = 1; i <= n; i++) {
        if (!mark[i])
            dfs(i, 1);
    }

    if (can) {
        cout << "yes" << endl;
        vint ans;
        for (int i = 1; i <= n; i++) {
            if (mark[i] == 1)
                ans.pb(i);
        }
        cout << ans.size() << endl;
        for (int exam:ans)
            cout << exam << " ";
        cout << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
