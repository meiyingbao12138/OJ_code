#include <iostream>
#include <cstring>
using namespace std;

int n,k,ans=0;

void dfs(int start,int x,int s) {
	if (x == k) {
		if (s == n) ans++;
		return;
	}
	for (int i = start;s+i*(k-x)<=n; i++) {
		dfs(i, x + 1, s + i);
	}
}

int main() {
	cin >> n >> k;
	dfs(1,0,0);
	cout << ans << endl;
	return 0;
}