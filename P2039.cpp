#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,w,a[1000100],vit[1000100];

signed main()
{
    cin>>n>>w;
    for(int i = 1; i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int ans = 0,j = 1;
    for(int i = n;i >= 1;i--)
    {
        if(vit[i]) continue;
        if(a[i] + a[j] <= w)
        {
            ans++;
            vit[i] = 1;
            vit[j++] = 1;
        }
        else
        {
            ans++;
            vit[i] = 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}