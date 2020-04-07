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

const int maxN = 1000000 + 10;
bool p[maxN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> prime;
    for (int i = 2; i < maxN; i++) {
        if (p[i])
            continue;
        prime.pb(i);
        for (int j = 2 * i; j < maxN; j += i) {
            p[j] = true;
        }
    }
    vector<int> ans;
    for (int i = 0; i < prime.size() - 1; i++) {
        if (prime[i] + 2 == prime[i + 1] and prime[i + 1] <= n) {
            ans.pb(prime[i]);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << 2 << " " << ans[i] << endl;
    }
    return 0;
}
