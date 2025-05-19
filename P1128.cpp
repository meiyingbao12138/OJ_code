#include <bits/stdc++.h>
#define int long long
using namespace std;

int ysf(int n,int k,int i){
    if(i == 1) return (n+k-1)%n+1;
    return (ysf(n-1,k,i-1)+k-1)%n+1;
}

signed main(){
    int n,m;
    while(cin>>n>>m){
        for(int i=1;i<=n;i++)
            cout<<ysf(n,m,i)<<" ";
        cout<<endl;
    }
    return 0;
}