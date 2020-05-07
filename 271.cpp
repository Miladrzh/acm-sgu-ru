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
    deque <string> dq;
    vector <string> ans;
    bool back = true;
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        dq.push_back(s);
    }
    reverse(dq.begin(), dq.end());
    while (m--) {
        string q;
        while (dq.size() > k) {
            if (back) {
                ans.pb(dq.front());
                dq.pop_front();
            } else {
                ans.pb(dq.back());
                dq.pop_back();
            }
        }
        cin >> q;
        if (q == "ROTATE") {
            back = !back;
        } else {
            string name = "";
            bool flag = false;
            for (int i = 0; i < q.size(); i++) {
                if (q[i] == '(') {
                    flag = true;
                } else if (q[i] == ')') {
                    break;
                } else if (flag) {
                    name += q[i];
                }
            }
            if (back) {
                dq.push_back(name);
            } else {
                dq.push_front(name);
            }
        }
    }

    while (dq.size() > 0) {
        if (back) {
            ans.pb(dq.front());
            dq.pop_front();
        } else {
            ans.pb(dq.back());
            dq.pop_back();
        }
    }
    reverse(ans.begin(), ans.end());

    for (string book:ans) {
        cout << book << endl;
    }

    return 0;
}
