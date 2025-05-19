#include <bits/stdc++.h>
#define int long long
using namespace std;

int k;
int vit[10];
int ans[11],a[11];

void dfs(int pos){

    if(pos>6){
        for(int i=1;i<=6;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i = 1;i<=k;i++){
        if(!vit[i]&&ans[pos-1]<a[i]){
            vit[i] = 1;
            ans[pos] = a[i];
            dfs(pos+1);
            vit[i]=0;
        }
    }
}

signed main(){
   while(cin>>k){
    memset(vit,0,sizeof vit);
    for(int i=1;i<=k;i++)
        cin>>a[i];
    sort(a+1,a+k+1);
    dfs(1);
   }
    return 0;
}