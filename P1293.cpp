#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int m, n;
    while (cin >> m >> n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 0; i <= n; i++) dp[0][i] = 1; 
        for (int i = 0; i <= m; i++) dp[i][1] = 1; 

        for (int i = 1; i <= m; i++) {
            for (int j = 2; j <= n; j++) {
                if (i < j)
                    dp[i][j] = dp[i][i]; 
                else
                    dp[i][j] = dp[i][j - 1] + dp[i - j][j]; 
            }
        }

        cout << dp[m][n] << endl; 
    }

    return 0;
}