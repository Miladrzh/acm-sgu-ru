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
    int s, p;
    cin >> s >> p;
    if (p < s)
        p = 0, s = 0;
    int late_min = p - s;
    if (late_min >= 30 * 60) {
        cout << 4 << endl;
    } else if (late_min >= 15 * 60) {
        cout << 3 << endl;
    } else if (late_min >= 5 * 60) {
        cout << 2 << endl;
    } else if (late_min > 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
