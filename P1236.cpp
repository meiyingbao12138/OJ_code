#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX = 1010;
int a[MAX][MAX],val[MAX][MAX];
int n,m,M[2][2] = {{1,0},{0,1}};

int dfs(int x,int y){
    if(val[x][y]) return val[x][y];
    if(x == m && y == n) return a[x][y];
    val[x][y] = a[x][y];
    for(int i = 0 ;i < 2; i++)
    {
        int tx = x + M[i][0],ty = y +  M[i][1];
        if(tx >= 1 && ty >= 1 && tx <= m && ty <= n)
        {
            val[x][y] = max(val[x][y],dfs(tx,ty) + a[x][y]);
        }
    }
    return val[x][y];
}

signed main()
{
    while(cin>>m>>n){
        memset(val,0,sizeof val);
        for(int i = 1; i<= m; i++)
            for(int j = 1; j <= n;j ++)
                cin>>a[i][j];
        int ans = dfs(1,1);
        cout<<ans<<endl;
    }

    return 0;
}