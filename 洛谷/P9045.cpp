#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 500010;
int n,k,a,ans,b[N],cnt;

signed main(){
	cin>>n>>k;
	int flag=1;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(!b[a]){
			cnt++;
			ans+=i-cnt;
			b[a]=1;
		}
		if(cnt==k){
			cout<<ans<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
