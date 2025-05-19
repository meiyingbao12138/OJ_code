#include <bits/stdc++.h>
using namespace std;

const int mod = 100003;
const int MAXX = 6000000;
const int MAX = 4000000;
const int inf = 0x3f3f3f;

struct node{
    int to;
    int next;
    int w;
}edge[2*MAX];

typedef struct node2{
    int ans;
    int pos;
    bool operator<(const node2 b) const
    {
        return ans > b.ans;
    }
}node2;

priority_queue<node2> q;

int ans[MAX],dis[MAX],head[MAX],cnt = 0,n,m,vit[MAX];

void add(int x,int y,int z)
{
    edge[++cnt].to = y;
    edge[cnt].next = head[x];
    edge[cnt].w = z;
    head[x] = cnt;
}

void dj()
{
    q.push((node2){0,1});
    dis[1] = 0;
    while(!q.empty())
    {
        auto tmp = q.top();
        q.pop();
        int u = tmp.pos;
        if(vit[u]) continue;
        vit[u] = 1;
        for(int i = head[u]; i ;i = edge[i].next)
        {
            int v = edge[i].to;
            if(dis[v] > dis[u] + edge[i].w)
            {
                dis[v] = dis[u] + edge[i].w;
                ans[v] = ans[u];
                q.push((node2){dis[v],v});
            }else if(dis[v] == dis[u] + edge[i].w)
            {
                ans[v] += ans[u];
                ans[v] %= mod;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    fill(dis, dis + n + 1, inf); 
    fill(vit, vit + n + 1, 0);   
    fill(ans,ans + n + 1,0  ); 
    for(int i = 1;i <= m;i++)
    {
        int x,y;
        cin>>x>>y;
        add(x,y,1),add(y,x,1);
    }
    ans[1] = 1;
    dj();
    for(int i = 1;i <= n ;i++)
        cout<<ans[i]<<endl;

    return 0;
}