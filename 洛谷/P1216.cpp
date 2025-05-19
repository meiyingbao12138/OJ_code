#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=1005;
int r,a[N][N];
int dp[N][N];

signed main(){
	cin>>r;
	memset(dp,0,sizeof dp);
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	}
	dp[1][1]=a[1][1];
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+a[i][j];
		}
	}
	int ans=0;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans<<endl;
	return 0;
}
