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
    int n;
    cin >> n;
    if (n % 3 == 0){
        cout << n / 3 * 2  << endl;
    }else if(n % 3 == 1){
        cout << (n - 1) / 3 * 2 << endl;
    }else{
        cout << (n - 1) / 3 * 2 + 1 << endl;
    }
    return 0;
}
