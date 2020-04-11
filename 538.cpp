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

    string s;
    getline(cin, s);

    int tot = 0;
    int non = 0;
    bool open = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            tot++;
            open = true;
        } else if (s[i] == ')') {
            tot++;
            if (open) {
                non += 2;
                open = false;
            }
        } else if (s[i] != ' ' && !((s[i] >= 'a' && s[i] <= 'z') ||
                                    (s[i] >= 'A' && s[i] <= 'Z'))) {
            open = false;
        }
    }

    cout << tot - non << endl;

    return 0;
}
