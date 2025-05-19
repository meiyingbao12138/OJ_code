#include<bits/stdc++.h>
using namespace std;

int n,m,len;
vector<int> ans(110);
map<string,set<int> > mymap;

signed main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>len;
        string s;
        while(len--){
            cin>>s;
            mymap[s].insert(i);
        }
    }
    cin>>m;
    while(m--){
        string s;
        cin>>s;
        if(mymap.count(s)){
            for(auto it = mymap[s].begin();it!=mymap[s].end();it++)
                cout<<*it<<" ";
            cout<<endl;
        }else{
            cout<<endl;
        }
    }
    return 0;
}