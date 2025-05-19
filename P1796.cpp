#include <bits/stdc++.h>
using namespace std;

#define int long long

int mov[][2] = {{2,1},{1,2}};
int n,m,vit[20][20],ans;

void dfs(int x,int y)
{
    if(x == m && y == n)
    {
        ans++;
        return;
    }

    for(int i = 0; i<=1;i++)
    {
        int tx = x+mov[i][0],ty = y+mov[i][1];
        if(tx>=1 && ty>=1 && tx<=m && ty <= n && !vit[tx][ty])
        {
            vit[tx][ty] = 1;
            dfs(tx,ty);
            vit[tx][ty] = 0;
        }
    }

}

signed main()
{
    cin>>n>>m;
    vit[1][1] = 1;
    dfs(1,1); 
    cout<<ans<<endl;
    return 0;
}