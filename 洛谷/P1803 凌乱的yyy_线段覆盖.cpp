#include <iostream>
#include <algorithm>
#define N 2000000
using namespace std;

typedef struct pos{
	int a;
	int b;
}pos;

bool cmp(pos x,pos y){
	return x.b<y.b;
}

int n,i;

int main(){
	cin>>n;
	pos x[N];
	for(i=0;i<n;i++)
		cin>>x[i].a>>x[i].b;
	sort(x,x+n,cmp);
	int min=x[0].b,cont=1;
	i=0;
	while(i<n){
		i++;
		if(x[i].a>=min){
			cont++;
			min=x[i].b;
		}
	}
	cout<<cont<<endl;
	return 0;
}
