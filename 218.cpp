//
// Created by milad on 31.03.20.
//

# include <iostream>

using namespace std;

int N;

bool bpm(int u, bool seen[], int matchR[]) {
    for (int v = 0; v < N; v++) {
        if (bpGraph[u][v] && !seen[v]) {
            seen[v] = true;
            if (matchR[v] < 0 || bpm(bpGraph, matchR[v],
                                     seen, matchR)) {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}


int maxBPM() {
    int matchR[N];
    memset(matchR, -1, sizeof(matchR));

    int result = 0;
    for (int u = 0; u < N; u++) {
        bool seen[N];
        memset(seen, 0, sizeof(seen));

        if (bpm(u, seen, matchR))
            result++;
    }
    return result;
}

int main() {
    
    cout << "Maximum number of applicants that can get job is "
         << maxBPM(bpGraph);

    return 0;
} 