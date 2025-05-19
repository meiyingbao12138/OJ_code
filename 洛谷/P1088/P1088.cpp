#include <iostream>
using namespace std;

const int N = 10005;
int n, m,cnt=0;
int mars[N], ans[N];
bool b[N],flag;

void find(int x) {
	if (flag) {
		return;
	}
	if (x > n) {
		cnt++;
		if (cnt == m+1) {
			flag = true;
			for (int i = 1; i <= n; i++)
				printf("%d ", ans[i]);
		}
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!cnt) {
			i = mars[x];
		}
		if (!b[i]) {
			ans[x] = i;
			b[i] = true;
			find(x + 1);
			ans[x] = 0;
			b[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> mars[i];
	}
	find(1);
	return 0;
}