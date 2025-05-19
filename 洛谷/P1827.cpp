#include<bits/stdc++.h>
using namespace std;

string s1,s2;

void f(int a,int b,int c,int d)
{
    if(a>b||c>d) return;
    int i = s2.find(s1[a]);
    f(a+1,a+i-c,c,i-1);
    f(a+i-c+1,b,i+1,d);
    cout<<s1[a];
}

signed main(){
    cin>>s2>>s1;
    int l = s1.size()-1;
    f(0,l,0,l);
    return 0;
}