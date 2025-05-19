#include <bits/stdc++.h>
using namespace std;

int n,m,f[5010],ans,ok,j;

struct node{
    int a,b,l;
    bool operator < (const node& t) const
    {
        return l < t.l;
    }
}e[10010];

int find(int x)
{
    if(f[x] == x) return x;
    else return f[x] = find(f[x]);
}

int main() {
    cin>>n>>m;
    for(int i = 1; i <= n;i++)
        f[i] = i;
    for(int i = 1; i <= m;i++)
    {
        cin>>e[i].a>>e[i].b>>e[i].l;
    }
    sort(e+1,e+m+1);
    for(int i = 1; i<=m;i++)
    {
        int f1 = find(e[i].a);
        int f2 = find(e[i].b);
        if(f1!=f2)
        {
            f[f1] = f2;
            ok++;
            if(e[i].l > ans) ans = e[i].l;
        }
        if(ok==n-1) break;
    }
    cout<<ans<<endl;
    return 0;
}