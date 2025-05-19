#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXE = 100010,MAXN = 11000;

int n,m,s,t,ans,inf = 0x3f3f3f3f3f3f3f3f;

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
    fill(dis+1,dis+n+1,inf);
    memset(vit,0,sizeof vit);
    q = priority_queue<node>();
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
            int d = max(dis[u] , edge[i].w);
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
    s = 0;
    while(cin>>n>>m>>t)
    {    
        if(n==m && m==t && t==0) break;
        memset(head,0,sizeof head);
        cnt = 0;
        s++;
        for(int i = 1;i <= m; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            add(u,v,w);
            add(v,u,w);
        }
        int ans[t+1];
        for(int i = 1; i<=t;i++)
        {
            int a,b;
            cin>>a>>b;
            f(a);
            ans[i] = dis[b];
        }   
        cout<<"Case #"<<s<<endl;
        for(int i = 1;i<=t;i++)
        {
            if(ans[i] == inf) cout<<"no path\n";
            else cout<<ans[i]<<endl;
        }
    }
    return 0;
}
