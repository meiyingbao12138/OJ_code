#include <bits/stdc++.h>
using namespace std;

#define int long long

int n,sum,res;
vector<int> a(11);
vector<vector<int> > ans;

void dfs(int x){
    if(x > 10){
        if(sum == n){
            res++;
            for(int i = 1;i<=10;i++){
                ans[res][i]=a[i];
            }
        }
        return;
    }

    for(int i = 1;i<=3;i++){
        if(sum+i <= n){
            sum+=i;
            a[x]=i;
            dfs(x+1);
            sum-=i;
        }
    }

}

signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n;
    res=0;
    ans.resize(1000000,vector<int>(11,0));
    dfs(1);
    cout<<res<<endl;
    for(int i = 1;i<=res;i++){
        for(int j = 1;j<=10;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}