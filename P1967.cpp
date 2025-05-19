#include <bits/stdc++.h>
#define int long long

using namespace std;

int cnt=0,n;
vector <int> q;

signed main() {
	while(cin>>n) {
		q.clear();
		while(n--) {
			int x;
			cin>>x;
			if(x == 1) {
				cnt++;
			} else if(x == 2) {
				int num;
				cin>>num;
				q.insert(q.begin()+cnt,num);
			} else if(x==3) {
				q.erase(q.begin()+cnt);
			}
		}
		for(int i=0; i<q.size(); i++)
			cout<<q[i]<<" ";
		cout<<endl;
	}
	return 0;
}