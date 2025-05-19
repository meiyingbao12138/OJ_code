#include <bits/stdc++.h>
using namespace std;

int info =  INT_MAX;
#define MAX 200010

typedef struct node{
    int to;
    int next;
    int w;
}node;

node edge[MAX];
    
int head[MAX];

typedef struct node2{
    int id;
    int ans;

    bool operator<(const node2 b) const {
        return ans>b.ans;
    }

}node2;

priority_queue<node2> q;

int n,m,s,cnt=0;
int ans[MAX],vit[MAX];

void add(int u,int v,int w)
{
    ++cnt;
    edge[cnt].to = v;
    edge[cnt].w = w;
    edge[cnt].next = head[u];
    head[u] = cnt;
}

signed main()
{
    cin>>n>>m>>s;
    for(int i = 1;i <= m;i++)
        ans[i] = info;
    for(int i = 1;i <= m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        add(u,v,w);
    }
    int u;
    u = s;
    q.push((node2){u,0});
    ans[u] = 0;
    while(!q.empty())
    {
        auto t = q.top();
        int u = t.id;
        q.pop();
        if(!vit[u])
        {
            vit[u] = 1;
            for(int i = head[u]; i ;i = edge[i].next)
            {
                int v = edge[i].to;
                if(ans[v] > ans[u] + edge[i].w)
                {
                    ans[v] = ans[u] + edge[i].w;
                    if(!vit[v]) q.push((node2){v,ans[v]});
                }
            }
        }
    }
    for(int i = 1;i <= n ;i++)
        cout<<ans[i]<<" ";
    return 0;
}