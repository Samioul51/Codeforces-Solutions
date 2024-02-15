/*

Link: https://codeforces.com/contest/1692/problem/A

*/


#include<iostream>
using namespace std;
int main(){
int t,i;
cin >> t;
int a[t],b[t],c[t],d[t],e[t];
for(i=0;i<t;i++)
{

cin >> a[i] >> b[i] >> c[i] >> d[i];

}
for(i=0;i<t;i++)
{
e[i] =0;
if(a[i]<b[i])
    e[i]++;
if(a[i]<c[i])
    e[i]++;
if(a[i]<d[i])
    e[i]++;
}
for(i=0;i<t;i++)
{
cout << e[i] << endl;
}
return 0;
}

