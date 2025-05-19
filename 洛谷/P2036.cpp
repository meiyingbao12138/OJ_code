#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define M 15
int n,a[M],b[M];
int ans=0x7fffffff;

void dfs(int i,int x,int y){
	if(i>n){
		if(x==1&&y==0)
			return;
		ans=min(ans,abs(x-y));
		return;
	}
	
	dfs(i+1,x*a[i],y+b[i]);
	dfs(i+1,x,y);
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	dfs(1,1,0);
	cout<<ans<<endl;
	return 0;
}
