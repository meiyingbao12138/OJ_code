#include <bits/stdc++.h>
using namespace std;

long long n,a[1000000];
long long ans,s[1000000];

int main(){
	cin>>n;
	for(long long i=1;i<=n;i++)
		cin>>a[i],s[i]=a[i]+s[i-1];
	for(long long i=1;i<=n;i++)
		ans+=a[i]*(s[n]-s[i]);
	cout<<ans<<endl;
	return 0;
} 
