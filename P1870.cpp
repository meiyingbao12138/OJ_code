#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,a[1010000];
int dp[1010000][2];

signed main()
{
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    
    dp[1][0] = 0;
    dp[1][1] = a[1];
    int ans=0;
    for(int i = 2;i <= n;i++)
    {
        dp[i][0] = max(dp[i-1][1],dp[i-2][1]);
        dp[i][1] = max(dp[i-2][1] + a[i],dp[i-1][0] + a[i]);
        ans=max(dp[i][0],dp[i][1]);
    }
    cout<<ans<<endl;
    return 0;
}