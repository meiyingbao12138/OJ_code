#include <bits/stdc++.h>
#define long long int
#define x first
#define y second
using namespace std;

int n,M,x_1,y_1;
int m[8][2]={{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
int dis[500][500];
queue<pair<int,int>> q;

void bfs(int x,int y){
	q.push({x,y});
	while(!q.empty()){
		auto t=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int tx=t.x+m[i][0];
			int ty=t.y+m[i][1];
			if(tx<=0||tx>n||ty<=0||ty>M) continue;
			if(dis[tx][ty]) continue;
			dis[tx][ty]=dis[t.x][t.y]+1;
			q.push({tx,ty});
		}
	}
}

signed main(){
	cin>>n>>M>>x_1>>y_1;
	dis[x_1][y_1]=0;
	bfs(x_1,y_1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=M;j++){
			if(i==x_1&&j==y_1) printf("0    ");
			else if(dis[i][j]==0) printf("-1   ");
			else printf("%-5lld",dis[i][j]);
		}
		cout<<"\n";
	}			
	return 0;
}
