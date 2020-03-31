//
// Created by milad on 31.03.20.
//

in the
name of
God   # include<bits / stdc++.h>   using namespace std;   #
define pb
push_back #
define slark
cerr << "slark" <<
endl;
#
define dagon
cout <<
endl;
#
define XX
first #
define YY
second #

define err(x)

cout << #x << " is: " << x <<
endl;
#

define Wait()

int _;
cin >>
_;
const int oo = 999999999;
const double PI = 3.1415931;
const double eps = 1e-9;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int, int> pii;
const int maxN = 1000 + 10;
char mat[maxN][maxN];
bool mark[maxN][maxN];
int ans, ax[] = {1, 0, 0, -1}, ay[] = {0, 1, -1, 0}, level[maxN][maxN];
queue <pii> q;
int n, m;

bool valid(pii x) {
    if (x.XX > 0 && x.YY > 0 && x.XX <= n && x.YY <= m) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 'X') {
                ans++;
                mark[i][j] = true;
                q.push(pii(i, j));
            }
        }
    }
    while (!q.empty()) {
        pii tmp = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            if (!mark[tmp.XX + ax[i]][tmp.YY + ay[i]] && valid(pii(tmp.XX + ax[i], tmp.YY + ay[i]))) {
                level[tmp.XX + ax[i]][tmp.YY + ay[i]]++;
                if (level[tmp.XX + ax[i]][tmp.YY + ay[i]] >= 2) {
                    ans++;
                    mark[tmp.XX + ax[i]][tmp.YY + ay[i]] = true;
                    q.push(pii(tmp.XX + ax[i], tmp.YY + ay[i]));
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
