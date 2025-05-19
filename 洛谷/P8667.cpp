#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<int> a,b,c;
int n,ans=0;

signed main()
{
    cin>>n;
    a.resize(n+1);
    b.resize(n+1);
    c.resize(n+1);
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i = 1;i<=n;i++)
    {
        cin>>c[i];
    }

    sort(a.begin()+1,a.end());
    sort(c.begin()+1,c.end());

    for(int i = 1;i<=n;i++)
    {
        ans+=(lower_bound(a.begin()+1,a.end(),b[i])-a.begin()-1)*(c.end()-upper_bound(c.begin()+1,c.end(),b[i]));
    }
    cout<<ans<<endl;
}