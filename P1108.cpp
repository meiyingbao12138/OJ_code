#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;

signed main(){
    while(cin>>n){
        if(n == 0)
            break;
        int x=0;
        int cnt = 0;
        while(n){
            x+=(n%10)*pow(2,cnt);
            cnt++;
            n/=10;
        }
     //   cout<<x<<endl;
        char ans[100];
        int k=0;
        while(x){
            int t = x%16;
            ans[k++] = (t>=10)?char('A'+(t-10)):char('0'+t);
            x/=16;
        }
        for(int i = k-1;i>=0;i--)
            cout<<ans[i];
        cout<<endl;
       // cout<<char('A'+1)<<endl;
    }
    return 0;
}