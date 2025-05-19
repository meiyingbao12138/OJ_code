#include <bits/stdc++.h>
using namespace std;

int s=0;

int solve(int n){
	if(n==1) return 1;
	return 2*(solve(n-1)+1);
}

int main(){
	int n;
	cin>>n;
	int ans=solve(n);
	cout<<ans;
	return 0;
}
