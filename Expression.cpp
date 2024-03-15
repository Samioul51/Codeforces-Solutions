/*

Link: https://codeforces.com/contest/479/problem/A

*/

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int a,b,c;
cin >> a >> b >> c;
int res=0;
if(((a+b)*c)>res)
    res= (a+b)*c;
if((a*(b+c))>res)
   res=a*(b+c);
if((a*b*c)>res)
    res=a*b*c;
if((a+(b*c))>res)
    res=a+(b*c);
if(((a*b)+c)>res)
    res=(a*b)+c;
if((a+b+c)>res)
    res=a+b+c;

cout << res << endl;
}
