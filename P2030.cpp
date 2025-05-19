#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,m;
int dis[200][200];
int a[200];

signed main()
{
    cin>>n>>m;
    memset(dis,0x3f,sizeof dis);
    for(int i = 2; i <= n;i++)
    {
        cin>>a[i];
    }

    for(int i = 1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        dis[u][v] = dis[v][u] = 1;
    }

    for(int k = 1;k<=n;k++)
    {
        for(int i = 1;i <= n;i++)
        {
            for(int j = 1;j<=n;j++)
            {
                dis[i][j] = min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        }
    }

    int ans = dis[1][2];
    for(int i =1;i<=n;i++)
        dis[i][i] = 0;


    for(int i = 2;i<=n-1;i++)
    {
        ans+=a[i];
        ans += min(dis[i+1][i] + a[i],dis[1][i+1] + dis[1][i]);
    }
    ans+=dis[1][n]+a[n];
    cout<<ans<<endl;
    return 0;
}