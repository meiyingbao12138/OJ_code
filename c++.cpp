#include <bits/stdc++.h>
using namespace std;

void f(int &a,int &b){
    swap(a,b);
}

signed main(){
    int x,y;
    cin>>x>>y;
    f(x,y);
    cout<<x<<" "<<y;
    return 0;
}