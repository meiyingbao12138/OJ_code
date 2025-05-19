#include <iostream>
#include <algorithm>
using namespace std;
int n,a,b[1000000],i,ans=-2147483647;
int main(){
   cin>>n;
   for(i=1;i<=n;i++){
   	cin>>a;
   	if(i==1) b[i]=a;
   	else b[i]=max(a,a+b[i-1]);
   	ans=max(ans,b[i]);
   }
   cout<<ans;
   return 0;
}
