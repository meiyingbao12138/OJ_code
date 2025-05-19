#include <bits/stdc++.h>
using namespace std;

int l,r;

int sum[10000010];

signed main()
{
    for(int i = 1;i <= 10000000;i++)
    {
        int t = i,pre = -1;
        while(t)
        {
            int now = t%10;
            if(now == 4)
            {
                sum[i]++;
                break;
            }
            if(pre == 2 && now == 6)
            {
                sum[i]++;
                break;
            }
            pre = now;
            t/=10;
        }
        sum[i]+=sum[i-1];
    }
    while(cin>>l>>r)
    {
        if(l==r && r==0) break;
        cout<<(r-l+1) - (sum[r] - sum[l-1])<<endl;
    }
    return 0;
}