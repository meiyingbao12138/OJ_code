#include <bits/stdc++.h>
#define int long long
using namespace std;

string s1,s2;
int a[10000],b[1000];

signed main(){
    int n;
    while(cin>>n){
        memset(a,0,sizeof a);
        a[0] = 1;
        int len = 1;
        int c = 0;
        for(int i=2;i<=n;i++){
            c = 0;
            for(int j = 0;j<len;j++){
                a[j] *= i;
                a[j] += c;
                c = a[j]/10;
                a[j] %= 10; 
            }
            while(c){
                a[len]+=c;
                c = a[len] /10;
                a[len]%=10;
                len++;
            }
        }
        for(int i = len-1;i>=0;i--)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}