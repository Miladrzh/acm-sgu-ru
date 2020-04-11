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

    int n, t1, t2;
    cin >> n >> t1 >> t2;
    bool flag1 = true, flag2 = true;
    int i;
    int cur = 0;
    for (i = 1; flag1 or flag2; i++) {

        if (i % t1 == 0 && flag1) {
            cur++;
        }
        if (i % t2 == 0 && flag2) {
            cur++;
        }

        if (i % t1 == 0 && cur >= n) {
            flag1 = false;
        }
        if (i % t2 == 0 && cur >= n) {
            flag2 = false;
        }

    }

    cout << cur << " " << i - 1 << endl;

    return 0;
}
