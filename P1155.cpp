#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans;

signed main(){
    int n;
    cin>>n;
    while(n--){
        ans=0;
        int a,b;
        cin>>a>>b;
        for(int i = 1;i <= a;i++){
            int t = 1;
            for(int j = 1;j<=b;j++){
                t=(t*i)%10000;
            }
            ans=(ans+t)%10000;
        }
        cout<<ans<<endl;
    }
    return 0;
}