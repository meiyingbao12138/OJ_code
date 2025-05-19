#include <iostream>
using namespace std;

int n,s=0,cnt=0;
int h[1001] = { 6,2,5,5,4,5,6,3,7,6 };
int ans[5],ans2=0;


void find(int x) {
	if (cnt > n) {
		return;
	}
	if (x > 3) {
		if (ans[1] + ans[2] == ans[3]&&cnt==n) {
			ans2++;
		}
		return;
	}
	for (int i = 0;i<=999 ; i++) {
		ans[x] = i;
		cnt += h[i];
		find(x + 1);
		ans[x] = 0;
		cnt -= h[i];
	}
}

int main() {
	cin >> n;
	n -= 4;
	for (int i = 10; i <= 999; i++)
		h[i] = h[i / 10] + h[i % 10];
	find(1);
	cout << ans2 << endl;
	return 0;
}