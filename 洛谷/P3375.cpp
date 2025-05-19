#include <bits/stdc++.h>
using namespace std;

char s1[1000010],s2[1000010];
int kmp[1000010];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s1+1;
    cin>>s2+1;
    int len1 = strlen(s1+1);
    int len2 = strlen(s2+1);
    int j = 0;
    for(int i = 2; i <= len2; i ++){
        while(j && s2[i]!=s2[j+1])
            j  = kmp[j];
        if(s2[j+1] == s2[i]) j++;
        kmp[i] = j;
    }
    j = 0;
    for(int  i = 1;i <= len1 ; i ++){
        while(j>0 && s2[j+1] != s1[i])
            j = kmp[j];
        if(s2[j+1] == s1[i])
            j++;
        if(j == len2){
            cout<<i-len2+1<<endl;
            j = kmp[j];
        }
    }

    for(int i = 1; i <= len2; i++)
        cout<<kmp[i]<<" ";

    return 0;
}