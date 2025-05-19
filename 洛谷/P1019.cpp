#include <bits/stdc++.h>
using namespace std;


string s[30];
int n,vit[30],ans = 0;

void dfs(string str)
{
    ans = max(ans,int(str.size()));
    for(int i = 1;i <= n;i++)
    {
        if(vit[i]>=2) continue;
        for(int j = 1; j < min(str.size(),s[i].size());j++)
        {
            if(str.substr(str.size()-j) == s[i].substr(0,j))
            {
                vit[i]++;
                dfs(str+s[i].substr(j));
                vit[i]--;
            }
        }
    }
}

signed main()
{
    cin>>n;
    for(int i = 1;i<=n;i++)
        cin>>s[i];
    char c;
    cin>>c;
    for(int i = 1;i <= n;i ++)
    {
        if(s[i][0] == c)
        {
            vit[i]++;
            dfs(s[i]);
            vit[i]--;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}