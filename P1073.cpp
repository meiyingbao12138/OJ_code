#include <bits/stdc++.h>
#define int long long
using namespace std;

string s;

signed main(){
    while (cin>>s){
        int flag=0;
        if(s[0]=='-'){
            flag = 1;
        }
        int k = s.size()-1;
        while(s[k]=='0') k--;
        if(flag) cout<<"-";
        for(;k>=flag;k--)
            cout<<s[k];
        cout<<endl;
    }
    return 0;
}