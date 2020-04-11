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

    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if (a + b > n) {
        cout << -1;
        return 0;
    }
    int c = n - a - b;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            a--;
        if (s[i] == '1')
            b--;
        if (s[i] == '2')
            c--;
    }
    int ans = 0;
    for (int i = 0; i < s.size() && a > 0; i++) {
        if (s[i] == '1' && b < 0) {
            s[i] = '0';
            a--;
            b++;
            ans++;
        }
        if (s[i] == '2' && c < 0) {
            s[i] = '0';
            a--;
            c++;
            ans++;
        }
    }
    for (int i = 0; i < s.size() && b > 0; i++) {
        if (s[i] == '0' && a < 0) {
            s[i] = '1';
            b--;
            a++;
            ans++;
        }
        if (s[i] == '2' && c < 0) {
            s[i] = '1';
            b--;
            c++;
            ans++;
        }
    }
    for (int i = 0; i < s.size() && c > 0; i++) {
        if (s[i] == '1' && b < 0) {
            s[i] = '2';
            c--;
            b++;
            ans++;
        }
        if (s[i] == '0' && a < 0) {
            s[i] = '2';
            c--;
            a++;
            ans++;
        }
    }
    if (a > 0 or b > 0 or c > 0) {
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl << s << endl;
    return 0;
}
