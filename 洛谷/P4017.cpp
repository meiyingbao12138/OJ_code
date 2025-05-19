#include <bits/stdc++.h>
using namespace std;

const int MAX = 500010;
const int mod = 80112002;

vector<int> a[MAX];
queue<int> q;
int n,m;
int ans[MAX],pre[MAX];

int dfs(int pos)
{
    int sum = 0;
    if(a[pos].empty()) return ans[pos] = 1;
    for(auto v:a[pos])
    {
        sum+=ans[v]?ans[v]:dfs(v);
        sum%=mod;
    }
    return ans[pos] = sum;
}

int main()
{   
    cin>>n>>m;
    for(int i = 1;i <= m;i ++)
    {
        int u,v;
        cin>>v>>u;
        a[u].push_back(v);
        pre[v]++;
    }
    int sum = 0;
    for(int i = 1;i <= n; i++)
    {
        if(!pre[i])
        {
            sum+=dfs(i);
            sum%=mod;
        }
    }
    cout<<sum;
    return 0;
}