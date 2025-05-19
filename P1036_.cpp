#include <bits/stdc++.h>
using namespace std;

int n;
int a[200][200];

signed main(){
    while(cin>>n){
        for(int i=1;i<=n;i++)
            for(int j =1;j<=n;j++)
                cin>>a[j][i];
        for(int i=1;i<=n;i++){
            for(int j =1;j<=n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}