#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n;
	while(cin >> n){
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
			
	for(int j = 1; j <= n; j++){
		for(int i = 1; i <= n; i++)
			cout << a[i][j] << " ";
		cout << endl;
	}
    }
	return 0;
}
