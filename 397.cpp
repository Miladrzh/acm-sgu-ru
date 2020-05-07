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

const int maxN = 1000000 + 100;
int pre[maxN], nex[maxN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int pivot = 0;
    const int END = 1000010;
    nex[pivot] = END;
    pre[0] = -1;
    pre[END] = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'L' and pre[pivot] != -1) {
            pivot = pre[pivot];
        } else if (s[i] == 'R' and nex[pivot] != END) {
            pivot = nex[pivot];
        } else if (s[i] != 'R' and s[i] != 'L') {
            nex[i + 1] = nex[pivot];
            pre[nex[pivot]] = i + 1;
            nex[pivot] = i + 1;
            pre[i + 1] = pivot;
            pivot = i + 1;
        }
    }

    int cur = nex[0];
    while (cur <= s.size()) {
        cout << s[cur - 1];
        cur = nex[cur];
    }

    return 0;
}
