#include <bits/stdc++.h>
using namespace std;

long long n,j,tmp,a[1000005],b[1000005],ans=0,cnt=1,i;

int main(){
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i],b[i]=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i-1;j++){
			if(a[j]<a[i])
				b[i]=max(b[i],b[j]+1);
		}
	}
	for(i=1;i<=n;i++)
		ans=max(ans,b[i]);
	cout<<ans<<endl;
	return 0;
}
