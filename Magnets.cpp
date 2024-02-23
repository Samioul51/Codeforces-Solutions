/*

Link: https://codeforces.com/contest/344/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int n;
cin >> n;
int a[n];
int i,c=0;
for(i=0;i<n;i++){
    cin>> a[i];
}
if(n==1)
    cout << "1" << endl;
else if(n==2 && a[0]==a[1])
    cout << "1" << endl;
else{
for(i=0;i<n-1;i++){
    if(a[i]!=a[i+1])
        c++;
}
    cout << c+1 << endl;
}}

 