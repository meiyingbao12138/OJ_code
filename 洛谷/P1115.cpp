#include <bits/stdc++.h>
using namespace std;

long a[1000000],b[1000000];
long n,ans=-2147483647;

int main(){
	cin>>n;
	for(long i=1;i<=n;i++){
		cin>>a[i];
		if(i==1)
			b[i]=a[i];
		else
			b[i]=max(a[i],b[i-1]+a[i]);
		ans=max(ans,b[i]);
	}
	cout<<ans<<endl;
	return 0;
}
