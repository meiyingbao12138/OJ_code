#include <bits/stdc++.h>
using namespace std;

typedef struct node{
    int l,r;
}node;

bool cmp(node a,node b){
    return a.l<b.l;
}

int L,M;
node a[200];

signed main(){
    while(cin>>L>>M){
        for(int i=1;i<=M;i++){
            cin>>a[i].l>>a[i].r;
        }
        sort(a+1,a+M+1,cmp);
        for(int i=1;i<M;i++){
            if(a[i].r>=a[i+1].l){
                a[i+1].l = a[i].l;
                a[i].l = -1;
                if(a[i+1].r<=a[i].r)
                    a[i+1].r=a[i].r;
            }
        
        }
        int t=0;
        for(int i=1;i<=M;i++){
            if(a[i].l!=-1){
                t+=a[i].r-a[i].l+1;
            }
        }
        cout<<L-t+1<<endl;
    }
    return 0;
}