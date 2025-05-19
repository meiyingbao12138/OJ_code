#include <iostream>
#include <cstring>
using namespace std;

int w, h,x,y,ans=0;
int m[4][4] = { {-1,0},{0,1},{1,0},{0,-1} };
string s[25];
bool vit[25][25];

void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int tx = x + m[i][0], ty = y + m[i][1];
		if (tx >= h || tx < 0 || ty >= w || ty < 0) continue;
		if (s[tx][ty] == '#') continue;
		if (!vit[tx][ty]) {
			ans++;
			vit[tx][ty] = true;
			dfs(tx, ty);
		}
	}
}

signed main() {
	cin >> w >> h;
	memset(vit, false, sizeof vit);
	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (s[i][j] == '@')
				x = i, y = j;
		}
	}
	vit[x][y] = true;
	ans = 1;
	dfs(x, y);
	cout << ans << endl;
	return 0;
}