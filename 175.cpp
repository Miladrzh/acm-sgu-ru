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

    int n, q;

    cin >> n >> q;
    int bef = 0;
    while (n > 1) {
        int k = n / 2;
        if (q > k) {
            q = n - q + 1;
            n = n - k;
        } else {
            bef += (n - k);
            q = k - q + 1;
            n = k;
            bef += (n - k);
        }
    }
    cout << bef + q;
    return 0;
}
