#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
int a[100010];

void f(int x){
    if(x+1 == n) a[x+1] = a[x]+1;
    if(x+2 == n) a[x+2] = a[x]+2;
    return f(x+1)+f(x+2);
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    f(0);
    cout<<a[n]<<endl;
    return 0;
}