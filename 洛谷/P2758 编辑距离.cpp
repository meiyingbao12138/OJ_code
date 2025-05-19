#include <iostream>
#include <cstring>
#include <algorithm>
#define N 20005
using namespace std;

int dp[N][N];
char a[N],b[N];
int ans,i,j;

int main(){
    cin>>a>>b;
    int len1=strlen(a),len2=strlen(b);
    for(i=0;i<=len1;i++)
        dp[i][0]=i;
    for(i=0;i<=len2;i++)
        dp[0][i]=i;
    for(i=1;i<=len1;i++){
        for(j=1;j<=len2;j++){
            dp[i][j]=min(dp[i-1][j]+1,dp[i][j-1]+1);
            dp[i][j]=min(dp[i-1][j-1]+(a[i-1]!=b[j-1]),dp[i][j]);
        }
    }
    cout<<dp[len1][len2]<<endl;
    return 0;
}
