#include <bits/stdc++.h>
using namespace std;

long long sum,cnt,n,k,a,s[1000000],b[1000000]={1};

int main(){
	cin>>n>>k;
	for(long long i=1;i<=n;i++){
		cin>>a;
		if(i==1) s[i]=a;
		else s[i]+=s[i-1]+a;
		b[s[i]%k]++;	
	}
	for(long long i=0;i<k;i++){
		sum+=(b[i]*(b[i]-1))/2;
	}
	cout<<sum<<endl;
	return 0;
}
