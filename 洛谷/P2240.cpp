#include <iostream>
#include <algorithm>
using namespace std;
typedef struct node{
	double m;
	double v;
	double a;
}node;
node x[105];

bool cmp(node x1,node x2){
	return x1.a>x2.a;
}

int main(){
	int n;
	double t;
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>x[i].m>>x[i].v;
		x[i].a=x[i].v/x[i].m;
	}
	sort(x+1,x+n+1,cmp);
	double ans=0;
	int i;
	for(i=1;x[i].m<=t&&i<=n;i++){
		ans+=x[i].v;
		t-=x[i].m;
	}
	ans+=x[i].a*t;
	printf("%.2f\n",ans);
	return 0;
} 
