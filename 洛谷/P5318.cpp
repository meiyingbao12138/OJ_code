#include <bits/stdc++.h>
using namespace std;

typedef struct node{
    int v,len;
}node;

int n,m,vit[100010];
vector<int> v[100010];
queue<int> q;

void dfs(int x)
{
    cout<<x<<" ";
    for(auto it : v[x])
    {
        if(!vit[it])
        {
            vit[it]++;
            dfs(it);
        }
    }
}

void bfs(int num)
{
    q.push(num);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto it : v[x])
            if(!vit[it])
            {
                q.push(it);
                vit[it]++;
            }
    }
}

signed main()
{
    cin>>n>>m;
    while(m--)
    {
        int v1,v2;
        cin>>v1>>v2;
        v[v1].push_back(v2);
    }
    for(int i = 1;i <= n;i++)
        if(!v[i].empty())
            sort(v[i].begin(),v[i].end());
    vit[1] = 1;
    dfs(1);
    cout<<endl;
    memset(vit,0,sizeof vit);
    vit[1] = 1;
    bfs(1);

    return 0;
}