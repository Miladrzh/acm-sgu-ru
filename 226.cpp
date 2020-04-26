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
vector <pii> v[maxN];
int dis[maxN][4];
bool mark[maxN][4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        v[x].pb(pii(y, z));
    }
    memset(dis, 63, sizeof dis);
    queue <pii> q;
    q.push(pii(1, 1));
    q.push(pii(1, 2));
    dis[1][2] = dis[1][3] = dis[1][1] = 0;
    mark[1][1] = mark[1][2] = mark[1][3] = true;
    while (!q.empty()) {
        pii cur = q.front();
        q.pop();
        for (pii edge:v[cur.XX]) {
            if (edge.YY != cur.YY and !mark[edge.XX][edge.YY]) {
                q.push(pii(edge.XX, edge.YY));
                dis[edge.XX][edge.YY] = dis[cur.XX][cur.YY] + 1;
                mark[edge.XX][edge.YY] = true;
            }
        }
    }

    if (!(mark[n][1] or mark[n][2] or mark[n][3])) {
        cout << -1 << endl;
    } else {
        cout << min(dis[n][1], min(dis[n][2], dis[n][3])) << endl;
    }

    return 0;
}
