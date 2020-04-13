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

int cnt[10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k, n;
    cin >> k >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cnt[x / 1000]++;
    }

    int ans = 2;
    for (int i = 1; i <= 9; i++) {
        ans += (cnt[i] + k - 1) / k;
    }
    cout << ans << endl;
    return 0;
}
