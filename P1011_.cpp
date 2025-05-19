#include <bits/stdc++.h>
using namespace std;

int n,ans;

void f(int x){
    if(x ==1 ) return;
    ans++;
    if(x%2){
        x=(3*x+1)/2;
    }else{
        x = x/2;
    }
    f(x);
}

signed main(){
    while(cin>>n){
        ans= 0;
        f(n);
        cout<<ans<<endl;
    }
    return 0;
}