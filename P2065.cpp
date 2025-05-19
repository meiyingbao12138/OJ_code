#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int n,k;

int main(){
    while(scanf("%d %d",&n,&k)!=EOF){
        int sum = 0;
        for(int i=1; i<n; i=max(i*k,i+1)){
            sum+=i;
        }
    //    printf("%d\n",sum);
        if(sum<=log2(n)){
            printf("case 1\n");
        }else if(sum<=n){
            printf("case 2\n");
        }else if(sum<=n*log2(n)){
            printf("case 3\n");
        }else{
            printf("case 4\n");
        }
    }
    return 0;
}




/*
10 2
1 + 2 + 4 + 8 


*/