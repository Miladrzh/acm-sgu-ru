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
    cin >> s;

    vector<char> v;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            if (s[i + 1] == '/') {
                v.pop_back();
                i++;
                if (s[i + 1] == 'U') {
                    i += 3;
                } else {
                    i += 5;
                }
            } else {
                if (s[i + 1] == 'U') {
                    v.pb('u');
                    i += 3;
                } else {
                    v.pb('d');
                    i += 5;
                }
            }
        } else {
            if (v.size() == 0) {
                cout << s[i];
            } else if (v.back() == 'u') {
                cout << (char) toupper(s[i]);
            } else {
                cout << (char) tolower(s[i]);
            }
        }
    }


    return 0;
}
