/*

Link: https://codeforces.com/contest/1873/problem/A

*/


#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >>t;
while(t--){
string p;
cin >> p;
char dummy;
if (p == "abc"){
    cout << "YES" << endl;}
else if(p[0]=='a' && p != "abc"){
    dummy=p[1];
    p[1] =p[2];
    p[2]= dummy;
    if(p== "abc")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;}
else if(p[1]=='b' && p != "abc"){
    dummy=p[0];
    p[0] =p[2];
    p[2]= dummy;
    if(p== "abc")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;}
else if(p[2]=='c' && p != "abc"){
    dummy=p[0];
    p[0] =p[1];
    p[1]= dummy;
    if(p== "abc")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;}
else if(p[0] != 'a' || p[1]!='b' || p[2] != 'c')
        {cout << "NO" << endl;}

}



return 0;
}

