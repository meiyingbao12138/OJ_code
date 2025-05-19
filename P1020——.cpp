#include <bits/stdc++.h>

using namespace std;

string s;

signed main(){
    while(getline(cin,s)){
        int ans1 = 0,ans2=0;
        int l=0,r = 0;
        int len1 = 500,len2 = 0,cnt = 0;
        while(s[r]!='\0'){
            cnt++;
            if(s[r]==' '||s[r+1]=='\0'){
                if(cnt<len1){
                    ans1 = l;
                    len1 = cnt;
                }
                if(cnt>len2){
                    ans2 = l;
                    len2 = cnt;
                }
                l = r+1;
                cnt = 0;
            }
            r++;
        }
    //    cout<<ans1<<" "<<ans2<<endl;
        for(int i = ans2;i <len2+ans2 ;i++){
            cout<<s[i];
        }
        cout<<endl;
       // cout<<s[ans1]<<endl;
        for(int i = ans1;i <len1+ans1 ;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}