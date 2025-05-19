#include <bits/stdc++.h>
using namespace std;

const int MAX = 10010;

int len[MAX],pre[MAX],ans[MAX];

vector<int> a[MAX];
queue<int> q;
int n;

int main()
{
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        int pos,p;
        cin>>pos>>len[i];
        ans[i] = len[i];
        while(cin>>p)
        {
            if(p == 0) break;
            pre[i]++;
            a[p].push_back(i);
        }
    }
    for(int i = 1;i <= n;i++)
    {
        if(pre[i] == 0)
        {
            q.push(i);
//            ans[i] = len[i]; 
        }
    }
    while(!q.empty())
    {
        int pos = q.front();
        q.pop();
        if(!a[pos].empty())
        {
            for(auto x : a[pos])
            {
                pre[x]--;
                if(pre[x] == 0)
                {
                    q.push(x);
                }
                ans[x] = max(ans[x],ans[pos]+len[x]);
            }
        }
    }
    int s = ans[1];
    for(int i = 1;i <= n; i++)
        s = max(s,ans[i]);
    cout<<s;

    return 0;
}