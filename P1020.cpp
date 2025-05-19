#include<bits/stdc++.h>
using namespace std;
 int main(){
     char m[1000];
     int i=0,word=0,p=0,q=0;
     int maxx=0,minn=500;
     gets(m);
     while(m[i]!='\0'){
         while(m[i]!=' '&&m[i]!='\0'){
             i++;
             word++;
         }
         if(word>maxx){
             maxx=word;
             p=i-word;
         }
         if(word<minn){
             minn=word;
             q=i-word;
         }
         while(m[i]==' '){
             i++;
             word=0;
         }
     }
     for(i=p;i<p+maxx;i++){
         cout<<m[i];
     }
     cout<<endl;
     for(i=q;i<q+minn;i++){
         cout<<m[i];
     }
     cout<<endl;
     return 0;
 } 
