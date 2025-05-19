#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n, a, b,tx;
int m[205];
int t[2] = { 1,-1 };
int vit[205];
queue<int> q;

signed main() {
	memset(vit, -1, sizeof vit);
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) 
		cin >> m[i];
	q.push(a);
	vit[a] = 0;
	while (!q.empty()) {
		auto tmp = q.front();
		q.pop();
		if (tmp == b) break;
		for (int i = 0; i <= 1; i++) {
			if (t[i] == 1) {
				tx = tmp + m[tmp];
				if (tx > n||vit[tx]>0) continue;
			}
			else {
				tx = tmp - m[tmp];
				if (tx < 1||vit[tx]>0) continue;
			}
			vit[tx] = vit[tmp] + 1;
			q.push(tx);
		}
	}
	cout << vit[b] << endl;
	return 0;
}