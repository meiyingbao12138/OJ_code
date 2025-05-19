#include <iostream>
using namespace std;
int n;
int b[15],a[15];

void solve(int x) {
	if (x > n) {
		for (int i = 1; i <= n; i++)
			printf("% 5d", a[i]);
		cout << endl;
		return;
	}
	for(int i=1;i<=n;i++)
		if (!b[i]) {
			a[x] = i;
			b[i] = 1;
			solve(x + 1);
			b[i] = 0;
		}
}

int main() {
	cin >> n;
	solve(1);
	return 0;
}