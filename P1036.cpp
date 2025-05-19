#include <bits/stdc++.h>
using namespace std;

char s[10000];

signed main(){
    int n;
    while(cin>>n){
        n++;
        int cnt = 1;
        while(n--){
            int i=0;
	int j;
	char ch;
	char a[256] = {0};
	    while((ch=getchar())!='\n')//一直接收缓冲区的字符。直至收到回车
	    {
	   	    a[i]=ch;
	    	i++;
	    }
	    a[i]='\0';    
            if(cnt==1){
                cnt++;
                continue;
            }
            cout<<s<<endl;
            int flag=1;
            for(int i=0;i<strlen(s);i++){
                if(s[i]!=s[strlen(s)-i-1]){
                    flag = 0;
                    break;
                }
            }
            if(flag) cout<<"Yes\n";
            else cout<<"No\n";
        }

    }
    return 0;
}