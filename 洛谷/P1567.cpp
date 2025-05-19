#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,i,a,tmp=0,ans=0,cnt=0;
	cin>>n;
	while(n--) {
		cin>>a;
		if(a>=tmp) {
			cnt++;
		} else {
			cnt=1;
		}
		tmp=a;
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
	return 0;
}
