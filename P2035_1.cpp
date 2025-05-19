#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> v[100010];
int n,m,vit[100010];

void dfs(int pos)
{
    for(auto x : v[pos])
    {
        if(!vit[x])
        {
            vit[x] = 1;
            dfs(x);
        }
    }
}

signed main()
{
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vit[1] = 1;
    dfs(1);
    int ans = 0;
    for(int i = 1;i <= n;i++)
        if(!vit[i]) ans++;
    cout<<ans<<endl;
    return 0;
}