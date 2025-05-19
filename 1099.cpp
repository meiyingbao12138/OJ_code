#include <bits/stdc++.h>
using namespace std;
#define int long long

int num;
char s[10000];

signed main(){
    int a=100;
int b=80;
int c=60;
int d=a-b+c;
printf("人物初始血量为%d\n",a);
printf("对战时，受到%d点伤害\n",b);
printf("自己用技能恢复%d点血量\n",c);
printf( "____%d\n", a-b+c);
printf ("____%d\n", d) ;
return 0;
}