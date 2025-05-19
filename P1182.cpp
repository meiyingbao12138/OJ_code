#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[1000010];

signed main(){
    int n;
    while(cin>>n){
        a[0] = 7%3;
        a[1] = 11%3;
        for(int i=2;i<=n;i++){
            a[i] = (a[i-1]+a[i-2])%3;
        }
        if(a[n]) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}