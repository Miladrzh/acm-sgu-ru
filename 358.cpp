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

int a[3][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    sort(a[0], a[0] + 3);
    sort(a[1], a[1] + 3);
    sort(a[2], a[2] + 3);
    a[0][2] = a[1][1];
    a[0][0] = a[2][1];
    sort(a[0], a[0] + 3);
    cout << a[0][1] << endl;
    return 0;
}
