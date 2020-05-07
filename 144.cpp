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

    double x, y, z;
    cin >> x >> y >> z;

    y -= x;
    y *= 60;

    cout << fixed << setprecision(7) << 1 - ((y - z) * (y - z)) / (y * y) << endl;

    return 0;
}
