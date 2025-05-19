#include <bits/stdc++.h>
using namespace std;

int d,x_,y_,b;

int main(){
    while(scanf("%d %d %d %d",&d,&x_,&y_,&b)!=EOF){
        int x,y;
        scanf("%d %d",&x,&y);
        int ans=0,t;
        b -= y_;
        b -= d;
        b /= x_;
        ans = d + x*b + y;
        printf("%d\n",ans);
    }
    return 0;
}

/*
00 01 02 03 04 05
10 11 12 13 14 15
20 21 22 23 24 25
30 31 32 33 34 35
40 41 42 43 44 45
50 51 52 53 54 55

*/
