#include <bits/stdc++.h>
#define int long long
using namespace std;

string s1,s2;
int a[1000],b[1000];

signed main(){
    int n;
    cin>>n;
    while(n--){
        cin>>s1>>s2;
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        for(int i=0;i<s1.size();i++)
            a[s1.size()-i-1]=s1[i]-'0';
        for(int i=0;i<s2.size();i++)
            b[s2.size()-1-i]=s2[i]-'0';
        int len = max(s1.size(),s2.size());
        for(int i=0;i<len;i++){
            a[i]=a[i]+b[i];
            a[i+1] += a[i]/10;
            a[i]%=10; 
        }
        while(a[len]){
            a[len+1]+=a[len]/10;
            a[len]%=10;
            len++;
        }
        for(int i=len-1;i>=0;i--)
            cout<<a[i];
        cout<<endl;
        }
    return 0;
}