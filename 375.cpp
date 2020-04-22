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
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "No solution\n";
        return 0;
    }

    vint ans;
    n /= 2;
    while (n > 0) {
        if (n % 2) {
            ans.pb(2);
        } else {
            ans.pb(1);
        }
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int type:ans)
        cout << type << " ";
    cout << endl;
    return 0;
}
