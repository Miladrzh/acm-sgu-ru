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

int a[1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k;
    cin >> k;
    while (k--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] %= 9;
        }
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int tk = a[1];
            for (int j = 2; j <= i; j++) {
                tk *= a[j];
                tk %= 9;
            }
            sum += tk;
            sum %= 9;
        }
        cout << (sum == 0 ? 9 : sum) << endl;
    }

    return 0;
}
