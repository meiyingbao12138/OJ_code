#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int n,q,k;
vector<int> isprime,prime;

void a()
{
    isprime[1] = 0;
    int cnt = 0;
    for(int i = 2; i <= n; i++)
    {
        if(isprime[i]) prime[++cnt] = i;

        for(int j = 1; j<=cnt && i*prime[j] <= n; j++)
        {
            isprime[i*prime[j]] = 0;
            if(i%prime[j] == 0) break;
        }
    }
}

signed main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    isprime.resize(n+1,1);
    prime.resize(n+1);
    a();
    while(q--)
    {
        cin>>k;
        cout<<prime[k]<<endl;
    }
    return 0;
}