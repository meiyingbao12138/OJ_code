#include <bits/stdc++.h>
using namespace std;

int m[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
string s[1005];
int x1,y1,x2,y2;
int n;
int dis[1005][1005];
queue<pair<int,int>> q;

int bfs(int x,int y){
	q.push({x,y});
	while(!q.empty()){
		auto t=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int tx=t.first+m[i][0],ty=t.second+m[i][1];
			if(tx<0||tx>=n||ty<0||ty>=n) continue;
			if(s[tx][ty]=='1'||dis[tx][ty]>=0) continue;
				dis[tx][ty]=dis[t.first][t.second]+1;
				q.push({tx,ty});
				if(tx==x2&&ty==y2) return dis[x2][y2];
		}
	}
}

signed main(){
	cin>>n;
	memset(dis,-1,sizeof dis);
	for(int i=0;i<n;i++)
		cin>>s[i];
	cin>>x1>>y1>>x2>>y2;
	x1--,x2--,y1--,y2--;
	dis[x1][y1]=0;
	int ans=bfs(x1,y1);
	cout<<ans<<endl;
	return 0;
}
