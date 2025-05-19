#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef struct node1{
    int num,pos;
    bool operator < (const node1 b) const{
        return (num>b.num)||(num==b.num && pos < b.pos);
    }
}node1;

typedef struct node2{
    int num,pos;
    bool operator < (const node2 b) const{
        return (num<b.num)||(num==b.num && pos < b.pos);
    }
}node2;

priority_queue<node1> maxx;
priority_queue<node2> minn;
node1 p1;
node2 p2;
int ans1[1000010],ans2[1000010],n,k,a[1000010],k1,k2;

signed main()
{
    cin>>n>>k;
    for(int i = 1;i <= n;i++)
        cin>>a[i];
    for(int i = 1;i <= k;i++){
        p1.num = a[i],p1.pos = i;
        p2.num = a[i],p2.pos = i;
        maxx.push(p1),minn.push(p2);

    }
    ans1[++k1] = maxx.top().num,ans2[++k2] = minn.top().num;
    for(int i = k+1;i <= n;i++)
    {
        p1.num = a[i],p1.pos = i;
        p2.num = a[i],p2.pos = i;
        maxx.push(p1),minn.push(p2);       
        while(maxx.top().pos<=i-k) maxx.pop();
        while(minn.top().pos<=i-k) minn.pop();
        ans1[++k1] = maxx.top().num,ans2[++k2] = minn.top().num;
    }

    for(int i = 1;i <= k1;i++)
        cout<<ans1[i]<<" ";
    cout<<endl;
    for(int i = 1;i <= k2;i++)
        cout<<ans2[i]<<" ";


    return 0;
}