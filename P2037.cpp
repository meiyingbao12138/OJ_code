#include <bits/stdc++.h>
using namespace std;

int n,m,cnt,x,y;
const int MAX = 11000;

struct node1{
    int to;
    int next;
    int w;
}edge[10010];

int head[110],dis[110],e[110][110];

void add(int u,int v,int w)
{
    
    cnt++;
    edge[cnt].to = v;
    edge[cnt].w = w;
    edge[cnt].next = head[u];
    head[u] = cnt;
}


typedef struct node{
    int dis;
    int pos;
    bool operator < (const node &a) const
    {
        return dis > a.dis;
    } 
}node;

priority_queue<node> q;
int vit[110];

void dijstra()
{
    dis[n] = 0;
    q.push((node){0,n});
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

int main()
{
    cin>>n>>m>>x>>y;
    for(int i = 1; i <= m ;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        add(u,v,w);
        add(v,u,w);
    }
    fill(dis+1,dis+n+1,0x3f3f3f3f);
    dijstra();
    if(dis[x] <= dis[y]) cout<<"YES "<<dis[x]<<endl;
    else cout<<"NO "<<dis[y]<<endl;
    return 0;
}