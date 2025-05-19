#include <iostream>

using namespace std;
int n,ans1=0,ans2[10001][11],a[11];

void dfs(int i,int x){
	if(i>10){
		if(x==n){
			ans1++;
			for(int k=1;k<=10;k++)
				ans2[ans1][k]=a[k];
		}
		return;
	}
	for(int k=1;k<=3;k++){
		if(x+k>n) break;
		a[i]=k;
		dfs(i+1,x+k);
		a[i]=0;
	}
}

int main(){
	cin>>n;
	dfs(1,0);
	cout<<ans1<<endl;
	for(int i=1;i<=ans1;i++){
		for(int j=1;j<=10;j++)
			cout<<ans2[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
