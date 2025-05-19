#include<stdio.h>
int main(){

char a[100];
for(int i=0;i<=100;i++)a[i]=' ';
int k,t=0;
gets(a);
scanf("%d",&k);
for(int i=0;i<100;i++)
    if(a[i]!=' '&& a[i]!='\0') t++;
for(int i=0;i<k-1;i++)printf("%c",a[i]);
for(int i=k-1;i<t;i++)printf("%c",a[k-1]);
printf("\n");
for(int i=0;i<k;i++)printf("%c",a[k]);
for(int i=k;i<t;i++)printf("%c",a[i]);
printf("\n");
return 0;
}