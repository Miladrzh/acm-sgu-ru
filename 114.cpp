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

const int maxX = 50000;
const int maxN = 15000;
ll pop[maxX];
ll ans[maxN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    ll afterPop = 0;
    cin >> n;
    vector<int> points;
    for (int i = 1; i <= n; i++) {
        int x, p;
        cin >> x >> p;
        if (pop[x] <= 0)
            points.pb(x);
        pop[x] += p;
        afterPop += p;
    }
    sort(points.begin(), points.end());

    ll sum = 0;
    int x = points[0];
    for (int i = 1; i < points.size(); i++) {
        sum += (pop[points[i]] * (points[i] - x));
    }
    ll popBefore = pop[points[0]];
    afterPop -= pop[points[0]];
    ans[0] = sum;
    for (int i = 1; i < points.size(); i++) {
        ll diff = points[i] - points[i - 1];
        sum -= (diff * afterPop);
        sum += (diff * popBefore);
        ans[i] = sum;
        afterPop -= pop[points[i]];
        popBefore += pop[points[i]];
    }
    int bestIndex = (int) (min_element(ans, ans + points.size()) - ans);
    cout << points[bestIndex] << endl;
    return 0;
}
