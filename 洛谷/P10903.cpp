#include <bits/stdc++.h>
using namespace std;

#define int long long

int b[300010],a[300010],l[300010],r[300010],sum0[300010],sum1[300010];
int n,m;

signed main()
{
    cin>>n>>m;
    for(int i = 1;i<=m;i++)
    {
        cin>>l[i]>>r[i];
        b[l[i]] += 1;
        b[r[i]+1] -= 1; 
    }

    for(int i = 1;i<=n;i++)
    {
        a[i] = a[i-1] + b[i];
        sum0[i] = sum0[i-1];
        sum1[i] = sum1[i-1];
        if(a[i] == 0) sum0[i]++;
        if(a[i] == 1) sum1[i]++;
    }

    for(int i = 1;i<=m;i++)
    {
        cout<<sum0[l[i]-1]+sum0[n]-sum0[r[i]]+sum1[r[i]]-sum1[l[i]-1]<<endl;
    }



    return 0;
}