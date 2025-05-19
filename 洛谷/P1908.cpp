#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
int a[500010],b[500010];
int ans = 0;

void msort(int l,int r){
    if(l>=r) return;
    int mid = (l+r)/2;
    msort(l,mid);
    msort(mid+1,r);
    int i = l,j = mid+1,k = l;
    while(i<=mid && j<= r){
        if(a[i]<=a[j]) b[k++] = a[i++];
        else b[k++] = a[j++],ans+=mid-i+1;
    }
    while(i<=mid) b[k++] = a[i++];
    while(j<=r) b[k++] = a[j++];
    for(int i = l;i<=r;i++)
        a[i] = b[i];
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i = 1;i<=n;i++)
        cin>>a[i];
    ans = 0;
    msort(1,n);
    cout<<ans<<'\n';
    return 0;
}