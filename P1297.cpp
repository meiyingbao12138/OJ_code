#include <bits/stdc++.h>

using namespace std;

int a[1010],k,n,p[1010];

signed main(){
	while(cin>>n>>k){
		for(int i = 1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
			cin>>p[i];
		int ans = 0;
		while(k--){
			sort(a+1,a+n+1);
			ans+=a[n];
			for(int i=1;i<=n;i++){
				ans = max(0,a[i]-p[i]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}