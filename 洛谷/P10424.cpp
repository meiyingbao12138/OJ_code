#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,ans=0;

bool check(int num)
{
    int f = 1;
    while(num)
    {
        int t = num%10;
        if(t%2==0 && f == 1) return false;
        if(t%2 && f == 0) return false;
        f = (f+1)%2;
        num/=10;
    }
    return true;
}

signed main()
{   
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        if(check(i))
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}