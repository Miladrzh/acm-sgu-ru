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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, t;
    cin >> s >> t;

    int bulls = 0, cows = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[i])
            bulls++;
    }


    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < t.size(); j++) {
            if (t[j] == s[i])
                cows++;
        }
    }
    cout << bulls << " " << max(cows - bulls, 0) << endl;
    return 0;
}
