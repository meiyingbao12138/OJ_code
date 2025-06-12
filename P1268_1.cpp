#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,a[10010],dp[10010];

signed main()
{
    cin>>n;
    for(int i = 1;i <= n;i++)
        cin>>a[i];
    int ans=a[1];
    for(int i = 1;i <=n;i++)
    {
       dp[i] = max(dp[i-1] + a[i], a[i]);
       ans = max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}