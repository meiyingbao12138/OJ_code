#include<bits/stdc++.h>
using namespace std;



signed main() {
    int n;
    cin >> n;
    vector<vector<int>> d(n+1, vector<int>(n+1,0));
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=n; ++j) {
            cin >> d[i][j];
        }
    }

    int k;
    cin >> k;
    vector<long long> results;

    while(k--) {
        int u, v, w;
        cin >> u >> v >> w;
        if(w < d[u][v]||(d[u][v]==0&&u!=v)) {
            d[u][v] = d[v][u] = w;
            for(int i=1; i<=n; ++i) {
                for(int j=1; j<=n; ++j) {
                    d[j][i] = d[i][j] = min(d[i][j], d[i][u] + d[u][j]);
                    d[j][i] = d[i][j] = min(d[i][j], d[i][v] + d[v][j]);
                }
            }
        }
        long long total = 0;
        for(int i=1; i<=n; ++i) {
            for(int j=i+1; j<=n; ++j) {
                total += d[i][j];
            }
        }
        results.push_back(total);
    }
    for(auto x : results)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}