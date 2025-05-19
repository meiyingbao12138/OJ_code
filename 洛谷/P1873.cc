#include <bits/stdc++.h>
using namespace std;

int l,r,m,n,a[1000000];

bool check(int x){
	int s=0;
	for(int i=0;i<n;i++){
		if(a[i]>=x) s+=a[i]-x;
	}
	return s>=m;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
	cin>>a[i],l=min(l,a[i]),r=max(r,a[i]);
	while(l<=r){
		mid=l+r>>1;
		if(check(mid)) l=mid+1;
		else r=mid-1;
	}
	cout<<l<<endl;
	return 0;
}
