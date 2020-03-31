//
// Created by milad on 31.03.20.
//

# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxN = 60 + 1;

ll dp[maxN][1 << 16];
int n, m, k;

ll mem(int pos, int mask) {
    if (__builtin_popcount(mask) < k) {
        return 0;
    }
    ll &ret = dp[pos][mask];
    if (ret != -1)
        return ret;
    if (pos == m) {
        return 1;
    }
    int last = mask & 1;
    if (__builtin_popcount(mask >> 1) >= k) {
        return ret = mem(pos - 1, (1 << (m - 1)) + (mask >> 1)) + mem(pos - 1, mask >> 1);
    } else {
        return ret = mem(pos - 1, (1 << (m - 1)) + (mask >> 1));
    }
}

int main() {

    cin >> n >> m >> k;
    memset(dp, -1, sizeof dp);
    ll ans = 0;
    for (int i = 0; i < 1 << m; i++) {
        ans += mem(n, i);
    }

    cout << ans << endl;

    return 0;
}
