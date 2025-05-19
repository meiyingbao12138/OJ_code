#include <iostream>

using namespace std;

int main(){
	int n,p,x,y,z;
	int a[n+1];
	cin>>n>>p;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=0;i<p;i++){
		cin>>x>>y>>p;
		for(int j=x;j<=y;j++)
			a[j]+=z;
	}
	int min=a[1];
	for(int i=1;i<=n;i++)
		if(min>a[i])
			min=a[i];
	cout<<min<<endl;
	return 0;
} 
