#include <bits/stdc++.h>
using namespace std;

int n,m,a,b;

signed main(){
    while(cin>>m>>n){
        int flag=0;
        for(a=0;a<=m;a++){
            b = m-a;
            if(a*2+b*4==n){
                flag = 1;
                cout<<a<<" "<<b<<endl;
                break;
            }
        }
        if(!flag) cout<<"-1 -1\n";
    }
    return 0;
}