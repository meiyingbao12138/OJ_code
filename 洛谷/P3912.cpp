# include <cstdio>
# include <cstring>
using namespace std;

bool flag[100000001];

int main()
{
	memset (flag, false, sizeof(flag));
	int n;
	scanf ("%d", &n);
	int ans = n - 1;
	for (int i = 2; i * i <= n; i++)
		if (!flag[i])
		{
			for (int j = 2; i * j <= n; j++)
				if (!flag[i * j])
				{
					flag[i * j] = true;
					ans--;
				}
		}
	printf ("%d\n", ans);
	return 0;
}
