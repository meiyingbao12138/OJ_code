#include <bits/stdc++.h>
using namespace std;

int n,a[1010];
int dp[1010];

signed main()
{
    cin>>n;
    for(int i = 1; i <= n;i ++)
    {
        cin>>a[i];
        dp[i] = 1;
    }
    int ans = 0;
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j < i;j++)
        {
            if(__gcd(a[i],a[j]) == 1) dp[i] = max(dp[i],dp[j]+1);
            ans = max(ans,dp[i]);
        }
    }
    
    cout<<ans<<endl;
    return 0;
}