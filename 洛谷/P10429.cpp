#include <bits/stdc++.h>
using namespace std;

#define int long long

int a[1010],sum[1010];
multiset <int> mul;
int n,l,r,sum1,sum2,ans = 0x3f3f3f3f3f3f3f3f;

signed main()
{
    cin>>n;
    for(int i = 1;i<=n;i++)
        {
            cin>>a[i];
            sum[i] = sum[i-1] + a[i];
        }
    for(l = 1;l<=n;l++)
        {
            for(r = l+1;r<=n;r++)
                {
                     mul.insert(sum[r]-sum[l]);       
                }
        }
    for(int r1 = 1;r1<n;r1++)
        {
            for(int l1 = 1;l1<=r1;l1++){
                int val = sum[r1] - sum[l1-1];
                auto it = mul.lower_bound(val);
                if(it!=mul.end())
                {
                    ans = min(ans,abs(*it - val));
                }
                if(it!=mul.begin())
                {
                    it --;
                    ans = min(ans,abs(*it - val));
                }
            }
            for(int r2 = r1+1;r2<=n;r2++) mul.erase(mul.find(sum[r2]-sum[r1]));
        }
    cout<<ans;
    return 0;
}