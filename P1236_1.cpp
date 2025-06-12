#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,m,mov[2][2]={{0,1},{1,0}};
int dis[1010][1010],a[1010][1010];
int vit[1010][1010];

int dfs(int x,int y)
{
    if(dis[x][y]) return dis[x][y];
    if(x == m && y == n) return a[x][y];
    for(int i = 0;i<2;i++)
    {
        int tx = x + mov[i][0],ty = y + mov[i][1];
        if(tx > m|| tx < 1 || ty > n || ty < 1) continue;
        dis[x][y] = max(dis[x][y],dfs(tx,ty) + a[x][y]);
    }
    return dis[x][y];
}

signed main()
{
    cin>>m>>n;
    for(int i = 1;i<=m;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    vit[1][1] = 1;
    cout<<dfs(1,1)<<endl;
    return 0;
}