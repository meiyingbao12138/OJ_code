#include <bits/stdc++.h>
using namespace std;
int n,m,a[1000000],l,r,mid,ans;

bool check(int x){
	int s=0,cnt=0;
	for(int i=0;i<n;i++){
		if(s+a[i]<=x)
			s+=a[i];
		else
			s=a[i],cnt++;
	}
	return cnt>=m;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i],l=max(l,a[i]),r+=a[i];
	while(l<=r){
		mid=(r+l)/2;
		if(check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	cout<<l;
	return 0;
}
