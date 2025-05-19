#include<bits/stdc++.h>
using namespace std;

#define int long long
int n,m;
int a[1000010];

signed main(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++)
        cin>>a[i];
    while(m--){
        int x;
        cin>>x;
        int ans = lower_bound(a+1,a+n+1,x)-a;
        if(a[ans]!=x) ans=-1;
        cout<<ans<<" "; 
    }
    return 0;
}