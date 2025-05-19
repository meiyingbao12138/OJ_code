#include <iostream>
#include <cstring>
#define int long long
using namespace std;

int t[4][2]= {{-1,0},{0,1},{1,0},{0,-1}};
int n,m,ans=0;
bool vit[105][105];
string s[105];

void dfs(int x,int y) {
	for(int i=0; i<4; i++) {
		int tx=x+t[i][0],ty=y+t[i][1];
		if(tx<0||tx>=n||ty<0||ty>=m) continue;
		if(vit[tx][ty]) continue;
		if(s[tx][ty]!='0') {
			vit[tx][ty]=true;
			dfs(tx,ty);
		}
	}
}

signed main() {
	cin>>n>>m;
	memset(vit,false,sizeof vit);
	for(int i=0; i<n; i++)
		cin>>s[i];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(!vit[i][j]&&s[i][j]!='0')
				dfs(i,j),ans++;
	cout<<ans<<endl;
	return 0;
}
