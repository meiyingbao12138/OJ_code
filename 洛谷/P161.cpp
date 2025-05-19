#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int N= 10005;
const int M=10000005;
int t[N],v[N],dp[M];
int m,T;

signed main(){
	cin>>T>>m;
	for(int i=1;i<=m;i++)
		cin>>t[i]>>v[i];
	memset(dp,0,sizeof dp);
	for(int i=1;i<=m;i++)
		for(int j=t[i];j<=T;j++)
			dp[j]=max(dp[j-t[i]]+v[i],dp[j]);
	cout<<dp[T]<<endl;
	return 0;
}
