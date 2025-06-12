#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,m,dis[100010];
vector<vector<int> > edge;

typedef struct node
{
    int pos,w;
    bool operator < (const node &a) const
    {
        return w > a.w; 
    }

}node;

void dj()
{
    memset(dis,0x3f,sizeof dis);
    dis[1] = 0;
    priority_queue<node> q;
    int vit[n+1] = {0};
    q.push((node){1,0});
    while(!q.empty())
    {
        auto t = q.top();
        q.pop();
        int u = t.pos;
        if(vit[u]) continue;
        vit[u] = 1;
        for(auto v : edge[u])
        {
            if(vit[v]) continue;
            int dist = dis[u] + 1;
            if(dis[v] > dist)
            {
                dis[v] = dist;
                q.push((node){v,dist});
            }
        }
    }
}

signed main()
{
    cin>>n>>m;
    edge.resize(n+1);
    for(int i = 1;i <= m;i++)
    {
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    dj();

    int ans= 0;
    for(int i = 1;i <=n;i++)
    {
        if(dis[i] == 0x3f3f3f3f3f3f3f3f) ans++;
    }
    cout<<ans<<endl;
    return 0;
}