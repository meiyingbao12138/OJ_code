#include <bits/stdc++.h>
using namespace std;

int vit[10][10];
int M[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
pair<int,int> x[15];
int n,m,t,sx,sy,fx,fy;
int ans = 0;

void w(int posx,int posy){

    if(posx == fx && posy == fy)
    {
        ans++;
        return;
    }

    for(int i = 0;i<4;i++){
        int nextx = posx+M[i][0];
        int nexty = posy+M[i][1];
        if(!vit[nextx][nexty]&&nextx>=1&&nextx<=m&&nexty>=1&&nexty<=n){
                vit[nextx][nexty] = 1;
                w(nextx,nexty);
                vit[nextx][nexty] = 0;
            }
    }
 
}

signed main(){
    cin>>n>>m>>t>>sx>>sy>>fx>>fy;
    for(int i = 1;i<=t;i++){
        int x,y;
        cin>>x>>y;
        vit[x][y]=1;
    }
    vit[sx][sy] = 1;
    w(sx,sy);
    cout<<ans<<endl;
    return 0;
}