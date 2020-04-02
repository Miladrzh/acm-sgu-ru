// in the name of God
// Young fire burn

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

ll s[100], f[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    f[1] = 1;
    f[2] = 1;
    s[1] = 1;
    s[2] = 2;

    for (int i = 3; i < 45; i++) {
        f[i] = f[i - 1] + f[i - 2];
        s[i] = s[i - 1] + f[i];
    }
    cout << s[k] << endl;
    return 0;
}
