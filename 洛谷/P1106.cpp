#include <bits/stdc++.h>
using namespace std;


string s;
int k;

signed main()
{
    cin>>s>>k;
    int i;
    while(k){
        for(i=0;s[i]<=s[i+1];){
            i++;
        }
        s.erase(i,1);
        k--;
    }
    while(s[0] == '0' && s.size() > 1 ){
    	s.erase(0,1);
	}
    cout<<s;
    return 0;
}

/*
50074897
2
4897

68129545206
6
12206

247062143405644330475617639991478539124236
30
113124236
*/