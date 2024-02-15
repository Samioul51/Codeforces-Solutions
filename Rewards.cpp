/*

Link: https://codeforces.com/contest/448/problem/A

*/



#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;

int main(){
SIR;
ll a,b,c,d,e,f,n;
cin >> a >> b>>c>>d>>e>>f>>n;
ll trophy=a+b+c;
ll medal=d+e+f;
ll trophyshelves= ceil(double(trophy)/5);
ll medalshelves= ceil(double(medal)/10);
if((trophyshelves+medalshelves)<=n)
    yes
else
    no
return 0;
}
