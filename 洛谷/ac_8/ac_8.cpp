#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int a[1005][1005];
int flag[1005][1005];
int d1[5] = { 0,1,-1,0,0 };
int d2[5] = { 0,0,0,1,-1 };
int n, m;
void ss(int x, int y)
{
	flag[x][y] = 0;
	for (int i = 1; i <= 4; i++)
	{
		int nx = x + d1[i];
		int ny = y + d2[i];
		if (nx != 1 && nx != n && ny != 1 && ny != m && flag[nx][ny])
		{
			if (a[x][y] <= a[nx][ny])
			{
				flag[nx][ny] = 0;
				ss(nx, ny);
			}
		}
	}
}
void ch(int x, int y)
{
	flag[x][y] = 0;
	for (int i = 1; i <= 4; i++)
	{
		int nx = x + d1[i];
		int ny = y + d2[i];
		if (flag[nx][ny])
		{
			flag[nx][ny] = 0;
			ss(nx, ny);
		}
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			flag[i][j] = 1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		int j = 1;
		ss(i, j);
	}
	for (int i = 1; i <= n; i++)
	{
		int j = m;
		ss(i, j);
	}
	for (int j = 1; j <= m; j++)
	{
		int i = 1;
		ss(i, j);
	}
	for (int j = 1; j <= m; j++)
	{
		int i = n;
		ss(i, j);
	}
	long long cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i][j] == 0 && flag[i][j])
			{
				ch(i, j);
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (flag[i][j])
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}