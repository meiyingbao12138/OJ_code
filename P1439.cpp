#include <bits/stdc++.h>
using namespace std;

int V,n;
int v[110],val[110];
int dp[1010][1010];

signed main()
{
    cin>>V>>n;
    for(int i = 1;i <= n ;i ++)
        cin>>v[i]>>val[i];
    for(int i = 1;i <= n;i++)
    {
        for(int j = V; j >= 0; j--)
        {
            if(j >= v[i]) dp[i][j] = max(dp[i-1][j - v[i]] + val[i],dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[n][V]<<endl;

    return 0;
}