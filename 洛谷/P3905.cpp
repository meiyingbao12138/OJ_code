#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAX = 110;

struct node{
    int to;
    int next;
    int w;
}edge[MAX*MAX];

typedef struct node2{
    int id;
    int ans;
    bool operator < (const node2 &b) const{
        return ans > b.ans;
    }
}node2;

priority_queue<node2> q;

int n,m,k,head[MAX],cnt=0,vit[MAX],dis[MAX],len[MAX*MAX],A,B;

void add(int x,int y,int z)
{
    cnt++;
    edge[cnt].to = y;
    edge[cnt].next = head[x];
    edge[cnt].w = 0;
    len[cnt] = z;
    head[x] = cnt;
}

void di()
{
    dis[A] = 0;
    q.push((node2){A,0});
    while(!q.empty())
    {
        auto tmp = q.top();
        int u = tmp.id;
        q.pop();
        if(vit[u])
            continue;
        else
            vit[u] = 1;
        for(int i = head[u]; i ;i = edge[i].next)
        {
            int v = edge[i].to;
            if(dis[v] > dis[u] + edge[i].w)
            {
                dis[v] = dis[u] + edge[i].w;
                if(!vit[v]) q.push((node2){v,dis[v]});
            }
        }
    }
}

signed main()
{
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        dis[i] = 0x3f3f3f3f3f3f3f3f;
    }
    for(int i = 1;i <= m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z);
        add(y,x,z);
    }
    cin>>k;
    for(int i = 1;i <= k;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int i = head[a]; i ; i = edge[i].next)
            if(edge[i].to == b)
                edge[i].w = len[i];
        for(int i = head[b]; i ; i = edge[i].next)
            if(edge[i].to == a)
                edge[i].w = len[i]; 
    }
    cin>>A>>B;
    di();  
    cout<<dis[B];
    return 0;
}
/*
20
20
9 5 40
7 4 38
3 10 42
14 16 40
19 5 31
18 7 74
7 2 46
5 13 71
10 18 74
18 13 87
11 2 37
16 8 56
15 12 53
11 8 92
6 10 10
1 12 63
4 16 3
11 12 37
20 19 39
10 17 36
17
5 9
10 3
10 18
19 20
16 14
16 4
17 10
7 4
6 10
12 1
19 5
2 11
7 18
18 13
15 12
11 12
5 13
1 20


439
*/