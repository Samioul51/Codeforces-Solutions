/*

Link: https://codeforces.com/contest/1742/problem/A

*/


#include<iostream>
using namespace std;
int main(){
int t,i;
cin >> t;
int a[t],b[t],c[t];
for(i=0;i<t;i++){
cin >> a[i] >> b[i] >> c[i];
}
for(i=0;i<t;i++){
if(a[i]+b[i] == c[i] || c[i]+b[i] == a[i] || a[i]+c[i] == b[i])
    cout << "YES" << endl;
else
    cout << "NO" << endl;
}
return 0;
}
