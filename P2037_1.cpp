#include <bits/stdc++.h>
using namespace std;

int n,m,x,y,dis[110],vit[110];

typedef struct node{
    int to;
    int w;
}node;

vector<node> edge[110]; 

priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;

void f()
{
    memset(dis,0x3f,sizeof dis);
    dis[n] = 0;
    q.push(make_pair(0,n));
    while(!q.empty())
    {
        auto t = q.top();
        q.pop();
        int u = t.second;
        if(vit[u]) continue;
        vit[u] = 1;
        for(auto x : edge[u])
        {
            int v = x.to;
            if(vit[v]) continue;
            int d = dis[u] + x.w;
            if(d<dis[v])
            {
                dis[v] = d;
                q.push(make_pair(d,v));
            }
        }
    }
}

signed main()
{
    cin>>n>>m>>x>>y;
    for(int i = 1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge[u].push_back((node){v,w});
        edge[v].push_back((node){u,w});
    }

    f();

    if(dis[x] <= dis[y])
    {
        cout<<"YES "<<dis[x]<<endl;
    }else
    {
        cout<<"NO "<<dis[y]<<endl;
    }
// test
    return 0;
}