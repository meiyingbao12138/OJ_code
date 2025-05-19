#include <bits/stdc++.h>
using namespace std;
#define int long long

int a,b,c,n;

int f(int x,int y){
    int r;
    while(y>0){
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}

signed main(){
    while(cin>>n){
        while(n--){
            cin>>a>>b>>c;
            int x = f(a,b);
            x = f(x,c);
            cout<<x<<endl;
        }
    }
    return 0;
}