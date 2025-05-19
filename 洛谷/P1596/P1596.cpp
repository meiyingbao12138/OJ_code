#include <iostream>
#include <cstring>
using namespace std;

int n, m, ans=0;
string s[105];
int M[8][2] = { {-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1} };
bool vit[105][105];

void dfs(int x, int y) {
	vit[x][y] = true;
	for (int i = 0; i < 8; i++) {
		int tx = x + M[i][0], ty = y + M[i][1];
		if (tx < 0 || tx >= n || ty < 0 || ty >= m) continue;
		if (s[tx][ty] == 'W'&&!vit[tx][ty]) {
			dfs(tx, ty);
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] == 'W' && vit[i][j] == false) {
				ans++;
				dfs(i, j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}