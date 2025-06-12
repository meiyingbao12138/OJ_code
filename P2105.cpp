#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,a[200000+10],sum[200000+10],v;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n>>v;
    for(int i =1;i<=n;i++)
        cin>>a[i],sum[i] = sum[i-1] + a[i];
    int ans = 0,i=1;
    for(;i<=n;i++)
    {
        int l=i,r=n,mid,res = i-1;
        while(l<=r)
        {
            mid = (l+r)>>1;
            if(sum[mid] - sum[i-1] <= v)
            {
                l = mid + 1;
                res = mid;
            }else
            {
                r = mid - 1;
            }
        }
        ans = max(ans,sum[res] - sum[i-1]);
    }

    cout<<ans<<endl;
    return 0;
}