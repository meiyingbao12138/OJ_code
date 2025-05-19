#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int f(int x){
    if(x == 0) return 1;
    if(x == 1) return 1;
    if(x == 2) return 2;
    if(x == 3) return 4;
    return f(x-1)+f(x-2)+f(x-4);
}

signed main(){
    while(cin>>n){
        cout<<f(n)<<endl;
    }
    return 0;
}