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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()) {
        cout << -1 << endl;
        return 0;
    }
    vint v1, v2;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            v1.pb(i);
        }
        if (t[i] == '+') {
            v2.pb(i);
        }
    }
    if (v2.size() != v1.size()) {
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;
    for (int i = 0; i < v1.size(); i++) {
        ans += fabs(v1[i] - v2[i]);
    }
    cout << ans << endl;


    return 0;
}
