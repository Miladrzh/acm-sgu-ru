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

class Edge {
public:
    int nei;
    int is_protected;
    int index;

    Edge(int x, int y, int z) {
        nei = x;
        is_protected = y;
        index = z;
    }
};

const int maxN = 200000 + 10;
vector <Edge> v[maxN];
vint ans;
int need[maxN];

void dfs1(int x, int h, int have) {
    need[x] = max(0, (h + 1) / 2 - have);

    for (Edge edge:v[x]) {
        dfs1(edge.nei, h + 1, have + edge.is_protected);
        need[x] = max(need[x], need[edge.nei]);
    }
}

void dfs2(int x, int changed) {
    for (Edge edge:v[x]) {
        if (need[edge.nei] - changed > 0) {
            if (edge.is_protected == 0) {
                ans.pb(edge.index);
                dfs2(edge.nei, changed + 1);
            } else {
                dfs2(edge.nei, changed);
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
    for (int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        if (s == "almost") {
            cin >> s;
            v[y].pb(Edge(x, 0, i));
        } else {
            v[y].pb(Edge(x, 1, i));
        }
    }

    dfs1(1, 0, 0);
    dfs2(1, 0);
    cout << ans.size() << endl;
    for (int index:ans) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}
