#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAX = 100010;

int a[MAX],b[MAX];
int n,m;

bool check(int l)
{
    int cnt = 0;
    for(int i = 1 ; i <= n;i ++)
        {
            int t  = b[i];
            while(t>l)
                {
                    cnt++;
                    t-=l;
                }
        }
    return cnt <= m+1;
}

signed main()
{
    cin>>n>>m;
    for(int i = 1;i <= n; i++)
       {
           cin>>a[i];
           b[i] = a[i]-a[i-1];
       }
    int l = 1,r = 1e8,mid;
    while(l<r)
    {
        mid = (l+r)>>1;
        if(check(mid)) r = mid;
        else l = mid + 1;
    }
    cout<<l;
    return 0;
}