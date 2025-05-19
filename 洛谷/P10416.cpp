#include <bits/stdc++.h>
using namespace std;

#define int  long long

int x,y,z,l,r,t;

signed main()
{
    cin>>t;
    while(t--)
        {
            int ans = 0;
            cin>>l>>r;
            for(int i = l;i <= r;i ++)
                {
                    int tmp = r - i;
                    if(i+i <= r) ans++;
                    if(tmp >= i) ans+=(tmp-i)*2;
                    else break;
                
                }
            cout<<ans<<endl;
        }
    return 0;
}

/*
4 5 6 7 8 9 10 11
7 6 5 4 3 2 1  0
7 3 
4+3+2+1
1 2 3 4
4+1+1

*/