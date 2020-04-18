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

bool isPrime(int x) {
    if (x == 1)
        return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        int firstDiv = 1;
        int secondDiv = 1;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                firstDiv = j;
                secondDiv = x / j;
                break;
            }
        }
        cout << (isPrime(firstDiv) and isPrime(secondDiv) ? "Yes" : "No") << endl;
    }

    return 0;
}
