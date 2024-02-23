/*

Link: https://codeforces.com/contest/271/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int year;
cin>> year;
while(year){
    year++;
    int n=year;
    int a[4];
    int i;
    for(i=0;i<4;i++){
        a[i]=n%10;
        n/=10;
    }
    if(a[0]!=a[1] && a[2]!=a[3] && a[0]!=a[2] && a[1]!=a[3] && a[0]!=a[3] && a[1]!=a[2])
        break;
}
cout << year << endl;
return 0;
}