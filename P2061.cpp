#include <bits/stdc++.h>
using namespace std;

deque<int> q;
int n;
int ru[100],chu[100];
vector<int> ans;
int flag;

void dfs(int x){
    if(flag) return;
    if(!q.empty()){
        ans.push_back(q.back());
        if(ans.size() == n){
            flag = 1;
            for(int i=0;i<ans.size();i++){
                if(ans[i]!=chu[i]){
                    flag = 0;
                    break;
                } 
            }
        }
        if(flag) return;
        q.pop_back();
        dfs(x);
        q.push_back(ans.back());
        ans.pop_back();

    }
    if(x<n){ 
        q.push_front(ru[x]);
        dfs(x+1);
        q.pop_front();

        q.push_back(ru[x]);
        dfs(x+1);
        q.pop_back();
    }
}

signed main(){
 //   ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    while(cin>>n){
        flag = 0;
        ans.clear(),q.clear();
        for(int i = 0;i < n;i++)
            cin>>ru[i];
        for(int i = 0;i < n;i++)
            cin>>chu[i];
        dfs(0);
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}