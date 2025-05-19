#include <bits/stdc++.h>
#define int long long
using namespace std;

string s1,s2;
int a[10000],b[10000],c[10000]; 

signed main(){
    while(cin>>s1>>s2){
        memset(c,0,sizeof c);
        for(int i=0;i<s1.size();i++)
            a[s1.size()-1-i] = s1[i] - '0';
        for(int i = 0;i<s2.size();i++)
            b[s2.size()-1-i] = s2[i] - '0';
        int t=0,len = s1.size()+s2.size();
        for(int i = 0;i<len;i++){
            for(int j = 0;j<len;j++){
                c[j+i] += a[j]*b[i];
            }
        }
        for(int i=0;i<len;i++){
            c[i+1] += c[i]/10;
            c[i]%=10;
        }
        while(c[len]){
            c[len+1] = c[len]/10;
            c[len]%=10;
            len++;
        }
    while(c[len-1]==0) len--;
    for(int i = len-1;i>=0;i--)
        cout<<c[i];
    cout<<endl;
    }
    return 0;
}