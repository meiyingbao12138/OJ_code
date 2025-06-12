#include <bits/stdc++.h>
using namespace std;

#define int long long

int x,y,s;

signed main()
{
    cin>>x>>y>>s;
    int l = x,r = y,mid;
    while(l<=r)
    {
        mid = (l+r)>>1;
        if(mid == s)
        {
            cout<<"G";
            break;
        }else if(mid > s)
        {
            r = mid - 1;
            cout<<"L";
        }else
        {
            cout<<"R";
            l = mid + 1;
        }
    }
    return 0;
}