/*

Link: https://codeforces.com/contest/1676/problem/A

*/


#include<iostream>
#include<string>
using namespace std;
int main(){
int t,i;
cin >> t;
string s[t];
for(i=0;i<t;i++)
{
cin >> s[i];
}
for(i=0;i<t;i++)
{
if(s[i][0]+s[i][1]+s[i][2] == s[i][3]+s[i][4]+s[i][5] )
    cout << "YES" << endl;
else
    cout << "NO" << endl;
}
return 0;
}
