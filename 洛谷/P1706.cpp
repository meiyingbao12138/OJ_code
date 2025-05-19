#include <bits/stdc++.h>
using namespace std;


int n;
int a[11],vit[11];

void dfs(int x){
    if(x>n){
        for(int i = 1;i<=n;i++)
            printf("%5d",a[i]);
        cout<<endl;
        return;
    }
    for(int i = 1;i<=n;i++){
        if(!vit[i]){
            vit[i] = 1;
            a[x] = i;
            dfs(x+1);
            vit[i] = 0;
            a[x] = 0;
        }
    }
}

signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n;
    dfs(1);
    return 0;
}