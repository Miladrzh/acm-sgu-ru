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

set<int> s[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        int m;
        cin >> m;
        while (m--) {
            int x;
            cin >> x;
            s[i].insert(x);
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (i == x or s[x].find(i) != s[x].end()) {
            continue;
        }
        for (auto cur:s[i]) {
            if (s[x].find(cur) != s[x].end()) {
                ans.pb(i);
                break;
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto i:ans) {
        cout << i << " ";
    }
    return 0;
}
