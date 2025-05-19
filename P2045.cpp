#include <bits/stdc++.h>

char s[110];

int main(){
    while(scanf("%s",s)!=EOF){
        int k;
        scanf("%d",&k);
        int n = strlen(s);
        for(int i = 0 ; i < n; i++){
            if(i <= k-1) printf("%c",s[i]);
            else printf("%c",s[k-1]);
        }
        printf("\n");
        for(int i = 0 ; i < n; i++){
            if(i <= k-1) printf("%c",s[k]);
            else printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
// 023384838737824