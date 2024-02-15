/*

Link: https://codeforces.com/contest/1703/problem/A

*/


#include<iostream>
#include<string>
using namespace std;
int main(){
int t,i;
cin >> t;
string s[t];
for(i=0;i<t ;i++)
{
cin >> s[i];
}
for(i=0;i<t;i++)
{
if(s[i] == "YES" || s[i] == "Yes" || s[i] == "yes" || s[i] == "yES" || s[i] == "YeS" || s[i] == "yEs" || s[i] == "yeS" || s[i] == "YEs" )
    cout << "YES" << endl;
else
    cout << "NO" << endl;
}
return 0;
}


