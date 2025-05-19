#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n,m,ans = 1,x;
    cin>>n>>m;
    for(int i = 1;i<=n;i++) cin>>x;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    for (int i = 1; i <= m; i++) {
        ans /= i;
    }
    for (int i = 1; i <= n - m; i++) {
        ans /= i;
    }
    cout<<ans<<endl;
    return 0;
}