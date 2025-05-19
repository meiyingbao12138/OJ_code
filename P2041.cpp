#include <bits/stdc++.h>
using namespace std;

int t;
string s1,s2,s3;

signed main()
{
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2>>s3;
        int m = s1.size(),n = s2.size(),l = s3.size();
        if (m + n != l) {
            cout << "NO\n";
            continue;
        }
        bool f[1010][1010];
        memset(f,false,sizeof f);
        f[0][0] = true; 
        for (int i = 0; i <= m; ++i) {
            for (int j = 0; j <= n; ++j) {
                int p = i + j - 1;
                if (i > 0) {
                    f[i][j] |= f[i-1][j] && (s1[i-1] == s3[p]);
                }
                if (j > 0) {
                    f[i][j] |= f[i][j-1] && (s2[j-1] == s3[p]);
                }
            }
        }
        if(f[m][n]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}