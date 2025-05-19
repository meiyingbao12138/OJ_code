#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
int a[100][100];
int tmd[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
pair<int , int> ans[1000];
int vit[100][100];

void dfs(int x,int y,int cnt){
    ans[cnt]={x,y};
    if(x==n&&y==m){
        return;
    }
    for(int i=0;i<4;i++){
        int tx = x+tmd[i][0],ty = y + tmd[i][1];
        if(tx>n||tx<1||ty>m||ty<1) continue;
        if(vit[tx][ty]) continue;
        if(a[tx][ty]==1){
            vit[tx][ty]=1;
            dfs(tx,ty,cnt+1);
            vit[tx][ty]=0;
        }
    }
}

signed main(){
    while(cin>>n>>m){
        memset(vit,0,sizeof vit);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        vit[1][1]=1;
        dfs(1,1,0);
        for(int i=0;i<n+m-2;i++){
            cout<<"("<<ans[i].first<<","<<ans[i].second<<")>";
        }
        cout<<"("<<ans[n+m-2].first<<","<<ans[n+m-2].second<<")\n";
    }
    return 0;
}