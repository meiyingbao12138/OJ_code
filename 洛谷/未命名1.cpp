#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 100010;

int n,k,a[MAX],vit[MAX],num[MAX],ans;

void dfs(int pos)
{
    if(pos > n)
    {
        string s = "";
        for(int i = 1 ;i <=n ;i++){
            s += to_string(a[i]);
        }
        cout<<s<<endl;
        int sum = 0,len = s.size();
        for(auto x : s){
            sum = sum*10 + (x - '0');
        }
        if(sum%k == 0) ans++;
        return;
    }

    for(int i = 1; i <= n ;i++){
        if(!vit[i]){
            num[pos] = a[i];
            vit[i] = 1;
            dfs(pos+1);
            vit[i] = 0;
        }
    }
}

signed main()
{
    cin>>n>>k;
    for(int i = 1; i<=n ;i ++)
        cin>>a[i];
    ans = 0;
    dfs(1);
    cout<<ans;
    return 0;
}