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

const int maxN = 10000 + 100;
ll dis[5][maxN];
bool mark[maxN];
vector <pii> v[maxN];

/*
 * find the diameter of tree
 * one of the vertices which lies at the end of the diameter will have most distance to all other vertices
 * why?
 */

int dfs(int x, int index) {
    mark[x] = true;

    int mx = x;
    for (pii edge:v[x]) {
        if (!mark[edge.XX]) {
            dis[index][edge.XX] = dis[index][x] + edge.YY;
            int max_ind = dfs(edge.XX, index);
            if (dis[index][max_ind] > dis[index][mx])
                mx = max_ind;
        }
    }
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        v[x].pb(pii(i, y));
        v[i].pb(pii(x, y));
    }

    int max_dist_ind = dfs(1, 1);
    memset(mark, false, sizeof mark);
    int max_dist_ind2 = dfs(max_dist_ind, 2);
    memset(mark, false, sizeof mark);
    dfs(max_dist_ind2, 3);


    for (int i = 1; i <= n; i++) {
        cout << max(dis[2][i], dis[3][i]) << endl;
    }

    return 0;
}
