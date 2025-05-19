#include <iostream>
#include <cstring>
#define x first 
#define y second
#define N 35
#define endl "\n"
#define int long long
using namespace std;
typedef pair<int, int> PII;
int n;
int m[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };
int s[N][N];
bool vit[N][N];
PII q[N * N];

void bfs(int x1, int y1) {
	q[0] = { x1,y1 };
	vit[x1][y1] = true;
	int hh = 0, tt = 0;
	while (hh <= tt) {
		auto t = q[hh++];
		for (int i = 0; i < 4; i++) {
			int tx = t.x + m[i][0], ty = t.y + m[i][1];
			if (tx<0 || tx>n + 1 || ty<0 || ty>n + 1 ) continue;
			if (vit[tx][ty]) continue;
			if (s[tx][ty] == 1) continue;
			vit[tx][ty] = true;
			q[++tt] = { tx,ty };
		}
	}
}

signed main() {
	cin >> n;
	memset(vit, false, sizeof vit);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> s[i][j];
	bfs(0, 0);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (s[i][j] == 0 && !vit[i][j]) {
				cout <<2<<" ";
			}
			else {
				cout << s[i][j]<<" ";
			}
		}
		cout << endl;
	}
	return 0;
}