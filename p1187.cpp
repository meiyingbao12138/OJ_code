#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[1000010];

signed main(){
    for(int i = 2;i<=1000000;i++){
        for(int j = 2;i*j<=1000000;j++){
            a[i*j]=1;
        }
    }
    int n;
    while(cin>>n){
        int flag = 0;
        for(int i=2;i<=n/2;i++){
            for(int j = 2;i*j<=n;j++){
                if(i*j==n&&!a[i]&&!a[j]){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}