/*

Link: https://codeforces.com/contest/1114/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int andrew,dimitry,michal;
int green,purple,black;
cin>>andrew >> dimitry >> michal;
cin >> green >> purple >> black;
int total=green+purple+black;
int counter1=0;
int counter2=0;
int counter3=0;
{

if(green>=andrew)
{
    counter1=1;
    green-=andrew;
    total-=andrew;
}
if((green+purple)>=dimitry){
    counter2=1;
    total-=dimitry;
}
if(total>=michal){
    counter3=1;
}
}

if(counter1==1 && counter2==1 && counter3==1)
    cout <<"YES" << endl;
else
    cout << "NO" << endl;

return 0;
}