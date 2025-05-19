#include<bits/stdc++.h>
using namespace std;

#define int long long

string a[100];
pair<int,int> f,c;
int m[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
int fm=0,cm=0,ans=0;
int flag = 1;

void move()
{  
    int tx1 = f.first+m[fm][0],ty1 = f.second+m[fm][1];

    if( tx1>=10 || tx1 <=-1 || ty1>=10 || ty1<=-1 || a[tx1][ty1]=='*' )
    {

        fm = (fm+1)%4;
    }
    else
        f.first = tx1,f.second = ty1;

    int tx2 = c.first+m[cm][0],ty2 = c.second+m[cm][1];
    if( tx2>=10 || tx2 <0 || ty2>=10 || ty2<0 || a[tx2][ty2] == '*')
    {
        cm = (cm+1)%4;
        
    }
    else
        c.first = tx2,c.second = ty2;
   // cout<<tx1<<" "<<ty1<<" "<<tx2<<" "<<ty2<<endl;
}

signed main(){
    for(int i = 0;i<10;i++)
    {
        cin>>a[i];
        for(int j = 0;j<10;j++)
        {
            if(a[i][j] == 'F')
                f.first = i,f.second = j;
            if(a[i][j] == 'C')
                c.first = i,c.second = j;
        }
    }
//    cout<<f.first<<" "<<f.second<<endl;
    while(f!=c)
    {
 //       cout<<ans<<endl;
        move();
        ans++;
//        cout<<ans<<endl;
        if(ans>4000000)
        {
            flag = 0;
            ans = 0;
            break;
        }
    }
    if(flag)
        cout<<ans<<endl;
    else
        cout<<"0\n";
    return 0;
}
/*
.****...*.
..*......*
*.........
..........
*........*
*.**.*..**
F..*......
***....*.*
.C.......*
.......*.*
*/