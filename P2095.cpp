#include <bits/stdc++.h>
using namespace std;

const int MAX = 110;

int g[MAX][MAX],n;
int d[MAX],ans;

signed main()
{
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>>g[i][j];
        }
    }

    for(int i = 1;i <= n;i++)
    {
        int sum = 0;
        for(int j = 1; j <= n; j++)
        {
            if(g[i][j]) sum++;
        }
        if(sum%2) ans++;
    }
   
    if(ans == 0 || ans == 2) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}