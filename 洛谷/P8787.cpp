#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAX = 200010;
int h[MAX],n,vit[MAX];
set<int> q;

signed main()
{
    cin>>n;
    for(int i= 1;i <= n ;i++)
        cin>>h[i],q.insert(h[i]);
    int ans = 0;
    while(*q.rbegin()!=1)
        {
            int t = *q.rbegin();
            auto it = q.rbegin();
            q.erase(*it);
            int num = t/2 + 1;
            num = pow(num,0.5);
            for(int i = 1; i <= n;i ++)
            {
                if(h[i] == t)
                {
                    if(h[i-1]!=t) ans++;
                    vit[i] = 1;
                }
            }
            q.insert(num);
            for(int i = 1;i <= n; i++)
                if(vit[i]) h[i] = num,vit[i] = 0;
        }
    cout<<ans;
    return 0;
}