/*

Link: https://codeforces.com/contest/996/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
long long n;
cin>>n;
long long c=0;
while(n){
    if(n>=100)
    {
        n-=100;
    }
    else if(n>=20){
        n-=20;

    }
    else if(n>=10)
    {
        n-=10;

    }
    else if(n>=5){
        n-=5;
    }
    else if(n>=1){
        n-=1;
    }
    c++;
}
cout << c << endl;
return 0;
}