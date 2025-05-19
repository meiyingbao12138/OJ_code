#include <bits/stdc++.h>
using namespace std;

#define int long long


string solve()
{
    char x;
    int k;
    string s="",str = "";
    while(x=getchar())
    {
        if(x == '[')
        {
            cin>>k;
            str = solve();
            while(k--)
                s += str;
        }else if(x == ']'){
            return s;
        }else{
            s+=x;
        }

    }
    return s;
}

signed main()
{
    cout<<solve();
    return 0;
}