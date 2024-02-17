/*

Link: https://codeforces.com/contest/1915/problem/A

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >>t;
while(t--){
int a,b,c,d;
cin >> a >> b >> c;
if(a!=b && a!=c && b==c)
    d=a;
else if((c!=b && a!=c && a==b))
    d=c;
else if((a!=b && b!=c && a==c))
    d=b;
cout << d << endl;

}
}
