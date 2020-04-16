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

int check(int x) {
    int ret = 0;
    int p5 = 5;
    while (x >= p5) {
        ret += x / p5;
        p5 *= 5;
    }
    return ret;
}

int binary_search(int q) {
    int low = 1;
    int high = 1000000000;

    while (low != high) {
        int mid = (low + high) / 2;
        if (q <= check(mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;

    int candidate = binary_search(q);
    if (check(candidate) == q)
        cout << candidate << endl;
    else
        cout << "No solution" << endl;

    return 0;
}
