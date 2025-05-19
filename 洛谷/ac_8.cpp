#include <bits/stdc++.h> 
#define int long long
using namespace std;
const int MAX = 1010;

int N, V, M;
int v[MAX], m[MAX], w[MAX];
int f[110][110];

signed main() {
	cin >> N >> V >> M;
	for(int i=1;i<=N;i++)
		cin>>v[i]>>m[i]>>w[i];
	for(int i=1;i<=N;i++)
		for(int j=V;j>=v[i];j--)
			for(int k=M;k>=m[i];k--)
					f[j][k]=max(f[j][k],f[j-v[i]][k-m[i]]+w[i]);
	cout<<f[V][M]<<endl;
	return 0;
}
