#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
int a[100010];
vector<int> q[100010];

signed main(){
	while(cin>>n){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			q[i].resize(a[i]+1);
			q[i][0]=a[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=a[i];j>=1;j--){
				cin>>q[i][j];
			}
		}
		cin>>k;
		while(k--){
			int pos,num;
			cin>>num>>pos;
			q[pos].push_back(num);
			q[pos][0]++;
		}
		for(int i=1;i<=n;i++){
			for(int j=q[i][0];j>=1;j--){
				cout<<q[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
