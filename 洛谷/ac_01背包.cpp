#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1005;
int v[N],w[N],dp[N];
int n,V;

signed main(){
	cin>>n>>V;
	for(int i=1;i<=n;i++)
		cin>>v[i]>>w[i];
	for(int i=1;i<=n;i++){
		for(int j=V;j>=0;j--){
			if(j>=v[i]){
			    dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
			}
		}
	}
	cout<<dp[V]<<endl;
	return 0;
}
