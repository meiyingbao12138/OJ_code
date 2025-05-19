#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=50;
int n,m;
int f[N][N];

signed main(){
	cin>>n>>m;
	f[1][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1&&j==1) continue;
			if((i%2!=0)||(j%2!=0))
				f[i][j]=f[i-1][j]+f[i][j-1];
		}
	}
	cout<<f[n][m]<<endl;
	return 0;
}
