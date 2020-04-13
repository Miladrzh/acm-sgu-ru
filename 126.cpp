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

map<int, map<int, bool> > mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    if (b > a)
        swap(a, b);
    int cnt = 0;
    while (!mp[a][b] && b != 0) {
        mp[a][b] = true;
        a -= b;
        b *= 2;
        cnt++;
        if (cnt > 10000)
            break;
        if (b > a)
            swap(a, b);
    }

    if (b == 0)
        cout << cnt << endl;
    else
        cout << -1 << endl;
    return 0;
}
