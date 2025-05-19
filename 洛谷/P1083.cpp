#include <bits/stdc++.h>
using namespace std;

#define int long long

int a[1000010],b[1000010],need[1000010];
int n,m,d[1000010],s[1000010],t[1000010],demand[1000010],flag = 0,ans = 0;

bool check(int mid)
{
    memset(demand,0,sizeof demand);
    for(int i = 1;i<=mid;i++)
    {
        demand[s[i]] += d[i];
        demand[t[i]+1] -= d[i];
    }

    for(int i = 1;i <= n ;i++)
    {
        need[i] = need[i-1] + demand[i];
        if(need[i] > a[i]) return false;
    }
    return true;
}

void solve()
{
    int l = 1,r = m,mid;
    while(l<r)
    {
        mid = (r+l)>>1;
        if(!check(mid)) r = mid;
        else l = mid+1; 
    }
    if(l >= m)
    {
        cout<<"0\n";
    }else
    {
        cout<<"-1\n"<<l<<"\n";
    }
}

signed main()
{
    cin>>n>>m;
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i = 1;i<=m;i++)
    {
        cin>>d[i]>>s[i]>>t[i];
    }
    solve();

    return 0;
}