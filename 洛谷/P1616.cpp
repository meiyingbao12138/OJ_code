#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int T,m;
ll t[10005],v[10005];


int main(){
	cin>>T>>m;
	for(int i=1;i<=m;i++)
		cin>>t[i]>>v[i];
	ll dp[10000005];	
	for(int i=1;i<=m;i++){
		for(int j=t[i];j<=T;j++)
			dp[j]=max(dp[j],dp[j-t[i]]+v[i]);
	}
	cout<<dp[T]<<endl;
	return 0;
} 
