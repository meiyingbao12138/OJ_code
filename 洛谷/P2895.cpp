#include <bits/stdc++.h>
#define int long long
#define PII pair<int,int> 
using namespace std;
const int N = 305;
#define x first
#define y second

int m[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int M,ans;
int dis[N][N],fire[N][N];
PII q[N*N];
bool flag =false;

int bfs(int x1,int y1){
	q[0]={x1,y1};
	int hh=0,tt=0;
	while(hh<=tt){
		auto t=q[hh++];
		for(int i=0;i<4;i++){
			int a=t.x+m[i][0],b=t.y+m[i][1];
			if(a<0||b<0) continue;
			if(dis[a][b]) continue;
			if(dis[t.x][t.y]+1>=fire[a][b]) continue;
			dis[a][b]=dis[t.x][t.y]+1;
			q[++tt]={a,b};
			if(fire[a][b]==0x3f3f3f3f3f3f3f3f) return dis[a][b];
		}
	}
	return -1;
}

signed main(){
	cin>>M;
	memset(fire,0x3f,sizeof fire);
	while(M--){
		int x1,y1,t;
		cin>>x1>>y1>>t;
		fire[x1][y1]=min(fire[x1][y1],t);
		for(int i=0;i<4;i++){
			int a=x1+m[i][0],b=y1+m[i][1];
			if(a<0||b<0) continue;
			fire[a][b]=min(fire[a][b],t);
		}
	}
	dis[0][0]=0;
	int ans=bfs(0,0);
	cout<<ans<<endl;
	return 0;
}
