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

const int maxN = 10 + 10;
int mat[maxN][maxN];
int n, k;

pii nexCor(pii cur) {
    if (cur.YY != n)
        return pii(cur.XX, cur.YY + 1);
    return pii(cur.XX + 1, 1);
}

void updateRow(pii curCor, int val) {
    for (int i = 1; i <= n; i++) {
        mat[curCor.XX][i] += val;
    }
}

void updateCol(pii curCor, int val) {
    for (int i = 1; i <= n; i++) {
        mat[i][curCor.YY] += val;
    }
}

void updateDiam(pii curCor, int val) {
    int a[4][2] = {{1,  1},
                   {1,  -1},
                   {-1, 1},
                   {-1, -1}};

    for (int i = 0; i < 4; i++) {
        pii tmp = curCor;
        while (tmp.XX > 0 && tmp.XX <= n && tmp.YY > 0 && tmp.YY <= n) {
            mat[tmp.XX][tmp.YY] += val;
            tmp.XX += a[i][0];
            tmp.YY += a[i][1];
        }
    }
}

int bt(pii curCor, int need) {
    if (need == 0)
        return 1;
    if (curCor.XX == n + 1 or ((n + 1) - curCor.XX) < need) {
        return 0;
    }

    int ret = bt(nexCor(curCor), need);
    if (!mat[curCor.XX][curCor.YY]) {
        updateCol(curCor, 1);
        updateRow(curCor, 1);
        updateDiam(curCor, 1);
        ret += bt(pii(curCor.XX + 1, 1), need - 1);
        updateCol(curCor, -1);
        updateRow(curCor, -1);
        updateDiam(curCor, -1);
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    if (k > n) {
        cout << 0 << endl;
        return 0;
    }
    cout << bt(pii(1, 1), k) << endl;
    return 0;
}
