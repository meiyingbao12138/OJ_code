#include <bits/stdc++.h>
using namespace std;

long long l,r,m,n,mid,a[1000000];

bool check(long long x){
	long long s=0;
	for(long long i=0;i<n;i++){
		if(a[i]>=x) s+=a[i]-x;
	}
	return s>=m;
}

int main(){
	cin>>n>>m;
	for(long long i=0;i<n;i++)
	cin>>a[i],r=max(r,a[i]);
	while(l<=r){
		mid=l+r>>1;
		if(check(mid)) l=mid+1;
		else r=mid-1;
	}
	cout<<min(l,r)<<endl;
	return 0;
}
