#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,ans;
void dfs(int x){
    if(x == n){
        ans++;
        return;
    }
    if(x>n) return;

    dfs(x+1);
    dfs(x+2);
}


signed main(){
    while(cin>>n){
        ans = 0;
        dfs(0);
        cout<<ans<<endl;
    }
    return 0;
}