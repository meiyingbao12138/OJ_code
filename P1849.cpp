#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,m,r[5],x,a[1000],dp[51][51][51][51];

signed main()
{
    cin>>n>>m;
    for(int i = 1;i <=n ;i++)
    {
        cin>>a[i];
    }
    while(m--)
    {
        cin>>x;
        r[x]++;
    }
    dp[0][0][0][0] = a[1];
    for(int i = 0;i <= r[1];i++)
    {
        for(int j = 0; j <= r[2];j++)
        {
            for(int k = 0; k<= r[3];k++)
            {
                for(int z = 0 ;z <= r[4];z++)
                {
                    int maxx = 0;
                    int b = i + 2*j + 3*k + 4*z + 1;
                    if(i!=0) maxx = max(dp[i-1][j][k][z] + a[b],maxx);
                    if(j!=0) maxx = max(dp[i][j-1][k][z] + a[b],maxx);
                    if(k!=0) maxx = max(dp[i][j][k-1][z] + a[b],maxx);
                    if(z!=0) maxx = max(dp[i][j][k][z-1] + a[b],maxx);
                    dp[i][j][k][z] = max(dp[i][j][k][z],maxx);
                }
            }
        }

    }
    cout<<dp[r[1]][r[2]][r[3]][r[4]]<<endl;
    return 0;
}