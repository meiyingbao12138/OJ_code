#include <iostream>

using namespace std;

int main(){
	int n,p,x,y,z,min=1e9;
	cin>>n>>p;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		b[i]=a[i]-a[i-1];
	for(int i=0;i<p;i++){
		cin>>x>>y>>z;
		b[x]+=z;
		b[y+1]-=z;
	}
	for(int i=1;i<=n;i++){
		a[i]=b[i]+a[i-1];
		if(min>a[i])
			min=a[i];
	}
	cout<<min<<endl;
	return 0;
} 
