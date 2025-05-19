#include <bits/stdc++.h>
using namespace std;

int n;

int a[100]={0};
vector<int> ans;
vector<int> anss;
stack<int> t;

void dfs(int x){
    if(!t.empty()){
        ans.push_back(t.top());
        if(ans.size() == n){
            int t=0;
            for(int i = 0;i < ans.size(); i++)
                t=t*10+ans[i];
            anss.push_back(t);
        }
        t.pop();
        dfs(x);
        t.push(ans.back());
        ans.pop_back();
    }

    if(x<n){
        t.push(a[x]);
        dfs(x+1);
        t.pop();
    }

}

signed main(){
    while(scanf("%d",&n)!=EOF){
        while(!t.empty()) t.pop();
        ans.clear();
        anss.clear();
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
//        sort(a,a+n);
         //       printf("here\n");
        dfs(0);
        sort(anss.begin(),anss.end());
        for(int i=0;i < anss.size();i++){
            ans.clear();
            while(anss[i]){
                ans.push_back(anss[i]%10);
                anss[i]/=10;
            }
            for(int i=ans.size()-1;i>=0;i--)
                printf("%d ",ans[i]);
            printf("\n");
        }
  //              printf("here\n");
    }
    return 0;
}