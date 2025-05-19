#include<bits/stdc++.h>
using namespace std;

#define int long long

int cnt[1000010];
int ans,n,s,maxx = 0;

signed main(){
    cin>>n>>s;
    for(int i = 1;i<=n;i++)
    {
        int c,p;
        cin>>p>>c;
        cnt[c]+=p;
        maxx = max(maxx,c);
    }

    for(int i = maxx;i>1;i--)
    {
        cnt[i-1]+=cnt[i];
    }

    for(int i = maxx;i>=1;i--)
    {
        ans+=min(s,cnt[i]);
    }
    cout<<ans<<endl;
    return 0;
}

/*
6
2 8
4 2


1 2 2 3 

1 2 3 4

5 6 7 8
*/