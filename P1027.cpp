#include <bits/stdc++.h>
using namespace std;
#define int long long

int m,n,k;

int ysf(int n,int k,int i){
    if(i==1) return (n+k-1)%n+1;
    else return (ysf(n-1,k,i-1)+k-1)%n+1;
}

signed main(){
    while(cin>>m){
        n=2*m;
        for(k=m+1;;k++){
            int flag = 1;
            for(int i = 1;i<=m;i++){
                if(ysf(n,k,i)<=m){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                cout<<k<<endl;
                break;
            }
        }
    }
    return 0;
}