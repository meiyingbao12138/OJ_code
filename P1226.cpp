#include <bits/stdc++.h>
#define int long long
using namespace std;

string a[210];

signed main(){
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        for(int i=n;i>=1;i--)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}