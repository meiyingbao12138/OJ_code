#include <iostream>
#include <algorithm>

using namespace std;

int fa[1005],N,M;

typedef struct node{
	int x,y,t;
}node;

bool cmp(node a,node b){
	return a.t<b.t;
}

int find(int x){
	if(fa[x]==x) return x;
	return fa[x]=find(fa[x]);
}

void add(int f1,int f2){
	f1=find(f1),f2=find(f2);
	fa[f1]=f2; 
}

bool check(){
	int sum=0;
	for(int i=0;i<N;i++){
		if(fa[i]==i) sum++;
		if(sum==2) return 0;
	}
	return 1;
}

int main(){
	cin>>N>>M;
	node a[100000+10];
	for(int i=0;i<N;i++)
		fa[i]=i;
	for(int i=0;i<M;i++)
		cin>>a[i].x>>a[i].y>>a[i].t;
	sort(a,a+N,cmp);
	for(int i=0;i<M;i++){
		add(a[i].x,a[i].y);
		if(check()){
			cout<<a[i].t<<endl;
			return 0;
		}
	}
	cout<<"-1"<<endl;
	return 0;
}
