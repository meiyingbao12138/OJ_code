#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXE = 100010,MAXN = 11000;

int n,m,s,t;

struct node1
{
    int to;
    int next;
    int w;
}edge[MAXE];

int head[MAXN],dis[MAXN],cnt,vit[MAXN];



void add(int u,int v,int w)
{
    cnt++;
    edge[cnt].to = v;
    edge[cnt].next = head[u];
    edge[cnt].w = w;
    head[u] = cnt;
}

typedef struct node
{
    int dis,pos;
    bool operator < (const node& a) const
    {
        return a.dis<dis;
    }
}node;

priority_queue<node> q;

void f(int s)
{
    dis[s] = 0;
    q.push((node){0,s});
    while(!q.empty())
    {
        auto t = q.top();
        q.pop();
        int u = t.pos;
        if(vit[u]) continue;
        vit[u] = 1;
        for(int i = head[u]; i ;i = edge[i].next)
        {
            int v = edge[i].to;
            if(vit[v]) continue;
            int d = dis[u] + edge[i].w;
            if(dis[v] > d)
            {
                dis[v] = d;
                q.push((node){d,v});
            }
        }
    }
}

signed main()
{
    cin>>n>>m>>s>>t;
    for(int i = 1;i <= m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        add(u,v,w);
        add(v,u,w);
    }

    fill(dis+1,dis+n+1,0x3f3f3f3f3f3f3f3f);
    f(s);
    cout<<dis[t]<<endl;
    return 0;
}
