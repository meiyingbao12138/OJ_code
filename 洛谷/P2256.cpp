#include <bits/stdc++.h>
using namespace std;

map<string,string> fa;
int n,m,k;

string find(string f){
    if(f == fa[f]) return f;
    return fa[f] = find(fa[f]);
}

void join(string a,string b)
{
    string f1 = find(a),f2 = find(b);
    if(f1 == f2) return;
    fa[f1] = f2;
}

bool check(string a,string b)
{
    //if(fa.find(a)==fa.end() || fa.find(b)==fa.end()) return false;
    if(find(a)!=find(b)) return false;
    return true;
}

signed main(){
    cin>>n>>m;
    string a,b;
    for(int i = 1;i<=n;i++)
    {
        cin>>a;
        fa[a] = a;
    }
    while(m--)
    {
        cin>>a>>b;
        join(a,b);
    }
    cin>>k;
    while(k--)
    {
        cin>>a>>b;
        if(check(a,b))
        {
            cout<<"Yes.\n";
        }else
        {
            cout<<"No.\n";
        }
    }
    return 0;
}