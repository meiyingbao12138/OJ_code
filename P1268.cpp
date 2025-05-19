#include <bits/stdc++.h>
using namespace std;

int n,dp[10010],a[10010];

signed main()
{
    cin>>n;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    dp[1] = a[1];
    int ans = -60000;
    for(int i = 1; i <= n ;i ++)
    {
        if(dp[i-1] + a[i] < a[i])
            dp[i] = a[i];
        else
            dp[i] = a[i] + dp[i-1];
        ans = max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}