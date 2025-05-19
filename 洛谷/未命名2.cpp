#include <bits/stdc++.h>
using namespace std;
const int N=1010;

int m[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int n,k,flag;
int vit[N][N];
int ans[N][N];
int tim[N][N];
string a[N];

bool bfs(){
	queue<pair<int,int> > q;
	memset(vit,-1,sizeof vit);
	q.push({0,0});
	ans[0][0]=0;
	tim[0][0]=0;
	while(!q.empty()){
		auto t=q.front();
		q.pop();
		if(t.first==n-1&&t.second==n-1) return true;
	
		for(int i=0;i<4;i++){
			int tx=t.first+m[i][0],ty=t.second+m[i][1];
			if(tx<0||ty<0||tx>=n||ty>=n) continue;
			if(a[tx][ty]=='X'&&tim[t.first][t.second]==0) 
				continue; 
			int magic=max(0,tim[t.first][t.second]-1);
			if(a[tx][ty]=='%') magic=k;
			
			if(tx>=0&&tx<n&&ty>=0&&ty<n&&a[tx][ty]!='#'&&vit[tx][ty]<magic){
				
				
				q.push({tx,ty});
				vit[tx][ty]=magic;
				ans[tx][ty]=ans[t.first][t.second]+1;
				tim[tx][ty]=magic;
			}
		}
	}
	return false;
}

signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(bfs()){
		cout<<ans[n-1][n-1];
	}else{
		cout<<"-1";
	}
	return 0;
} 
