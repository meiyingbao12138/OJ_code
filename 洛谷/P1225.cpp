#include <bits/stdc++.h>
#define int long long
#define N 5005
using namespace std;
int n;
int num[N];
int dfs(int x){
	if(num[x]) return num[x];
	int sum=0;
	if(x==1) sum=1;
	else if(x==2) sum=2;
	else sum=dfs(x-1)+dfs(x-2);
	num[x]=sum;
	return sum;
}

signed main(){
	cin>>n;
	memset(num,0,sizeof num);
	int ans=dfs(n);
	cout<<ans<<endl;
	return 0;
}
