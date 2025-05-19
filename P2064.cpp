#include <bits/stdc++.h>

using namespace std;

long long n,m;
int x;

signed main(){
 //   ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    while(scanf("%lld %lld",&n,&m)!=EOF){
        int a[m+1]={0};
        while(n--){   
            scanf("%d",&x);
            a[x]++;
        }
        for(int i=1;i<=m;i++)
           printf("%d\n",a[i]);
    }
    return 0;
}