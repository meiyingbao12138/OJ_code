#include <bits/stdc++.h>
using namespace std;

int main(){
	long long ans=1,a,b,p;
	cin>>a>>b>>p;
	long long a1=a,b1=b,p1=p;
	while(b>0){
		if(b%2==1){
			ans=(ans*a)%p;
		}
		a=(a*a)%p;
		b/=2;
	}
	printf("%lld^%lld mod %lld=%lld\n",a1,b1,p1,ans);
	return 0;
}
