#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;

deque<int> q;


signed main()
{
    int n,t;
    cin>>t;
    while(t--)
    {    
        cin>>n;
        q.clear();
        for(int i =1 ;i <=n;i++)
            q.push_back(i);
        while(q.size()>1)
        {
            q.pop_front();
            int t = q.front();
            q.pop_front();
            q.push_back(t);
        }
        cout<<q.front()<<endl;
    }
    return 0;
}