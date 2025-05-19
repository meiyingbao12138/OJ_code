#include <bits/stdc++.h>
using namespace std;

string s;
int n;

signed main(){
    cin>>n;
    cin.ignore();
    while(n--){
        getline(cin,s);
        int l=0,r=s.size()-1;
        int flag=1;
        while(l<=r){
            if(s[l]!=s[r]){
                flag = 0;
                break;
            }
            l++,r--;
        }
        if(flag) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}