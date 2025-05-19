#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PII pair<int,int>
using namespace std;

const int N=505;
int t[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int n,m,a,b;
int dis[N][N];
queue<PII> q,p;

void bfs(){
	while(!q.empty()){
		auto tmp=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int tx=tmp.first+t[i][0],ty=tmp.second+t[i][1];
			if(tx<1||ty<1||tx>n||ty>m) continue;
			if(dis[tx][ty]>=0) continue;
			dis[tx][ty]=dis[tmp.first][tmp.second]+1;
			q.push({tx,ty});
		}
	}
}

signed main(){
	memset(dis,-1,sizeof dis);
	cin>>n>>m>>a>>b;
	int x_,y_;
	for(int i=0;i<a;i++){
		cin>>x_>>y_;
		dis[x_][y_]=0;
		q.push({x_,y_});
	}
	bfs();
	for(int i=1;i<=b;i++){
		cin>>x_>>y_;
		cout<<dis[x_][y_]<<endl;
	}
	return 0;
}
