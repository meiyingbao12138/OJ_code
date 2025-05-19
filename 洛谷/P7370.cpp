#include <bits/stdc++.h>
using namespace std;

const int MAX = 100010;

int n,m;
vector<int> a[MAX];
int vit[MAX];

void dfs(int u)
{
    for(auto v : a[u])
    {
        if(!vit[v])
        {
            vit[v]++;
            dfs(v);
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i = 1;i <= m;i ++)
    {
        int u,v;
        cin>>v>>u;
        a[u].push_back(v);
    }
    if(a[1].empty())
        vit[1] = 1;
    dfs(1);
    for(int i = 1;i <= n; i++)
    {
        if(vit[i]) cout<<"1";
        else cout<<"0";
    }
    return 0;
}