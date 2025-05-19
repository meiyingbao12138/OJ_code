#include <bits/stdc++.h>
using namespace std;

int n,m,cnt;

struct node{
    int to;
    int next;
    int w;
}edge[100010*2];

int head[100010],vit[100010],dis[100010];

typedef struct node1
{
    int dis,pos;
    bool operator < (const node1 & a) const
    {
        return a.dis < dis;
    }
}node1;

priority_queue<node1> q;

void add(int u,int v)
{
    cnt++;
    edge[cnt].to = v;
    edge[cnt].w = 1;
    edge[cnt].next = head[u];
    head[u] = cnt;
}

void f()
{
    dis[1] = 0;
    q.push((node1){0,1});
    while(!q.empty())
    {
        auto t = q.top();
        q.pop();
        int u = t.pos;
        if(vit[u]) continue;
        vit[u] = 1;
        for(int i = head[u]; i ; i = edge[i].next)
        {
            int v = edge[i].to;
            if(vit[v]) continue;
            int d = 1 + dis[u];
            if(dis[v] > d)
            {
                dis[v] = d;
                q.push((node1){d,v});
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i = 1;i <= m;i++)
    {
        int x,y;
        cin>>x>>y;
        add(x,y);
        add(y,x);
    }

    fill(dis+1,dis+n+1,0x3f3f3f3f);

    f();
    int ans = 0;
    vit[1] = 1;
    for(int i = 1;i <= n;i++)
        if(!vit[i]) ans++;
    cout<<ans<<endl;
    return 0;
}