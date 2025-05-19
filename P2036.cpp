#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,m,vit[20],sum,ans,v[20],a[20];

void dfs(int pos)
{
    if(pos >= n)
    {
        if(sum==m) ans++;
        return;
    }

    if(sum == m)
    {
        ans++;
        return;
    }

    for(int i = 1; i<=n;i++)
    {
        if(!vit[i] && a[i] < v[pos-1])
        {
            vit[i] = 1;
            v[pos] = a[i];
            sum++;
            dfs(pos+1);
            vit[i] = 0;
            sum--;
        }
    }

}

signed main()
{
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
        cin>>a[i];
    v[0] = 0x3f3f3f3f3f3f3f3f;
    sort(a+1,a+n+1);
    dfs(1); 
    cout<<ans<<endl;
    return 0;
}