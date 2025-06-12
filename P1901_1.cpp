#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,a[10010],dp[10010];

signed main()
{
    cin>>n;
    for(int i = 1;i <=n ;i++)
    {
        cin>>a[i];
    }
    dp[1] = 1;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j < i;j++)
        {
            if(__gcd(a[i],a[j]) == 1)
            {
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}