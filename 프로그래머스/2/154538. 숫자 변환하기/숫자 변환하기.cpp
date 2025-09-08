#include <bits/stdc++.h>

using namespace std;


int solution(int x, int y, int n) {
    
    const int INF = INT_MAX;
    if (x == y) return 0;

    vector<int> dp(y + 1, INF);
    dp[x] = 0;

    for (int i = x; i <= y; ++i) {
        if (dp[i] == INF) continue;
        auto relax = [&](int nxt) {
            if (nxt <= y) dp[nxt] = min(dp[nxt], dp[i] + 1);
        };
        
        relax(i + n);
        relax(i * 2);
        relax(i * 3);
    
    }
    return dp[y] == INF ? -1 : dp[y];
}
