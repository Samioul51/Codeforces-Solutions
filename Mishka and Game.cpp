/*

Link: https://codeforces.com/contest/703/problem/A

*/


#include<iostream>
using namespace std;
int main(){
int t,i;
cin >> t;
int a[t],b[t];
int m=0,n=0;
for(i=0;i<t;i++)
{
cin >> a[i] >> b[i];
}
for(i=0;i<t;i++)
{
if(a[i] > b[i])
    m++;
else if (a[i]<b[i])
    n++;

}
if(m>n)
    cout << "Mishka" << endl;
else if (m<n)
    cout << "Chris" << endl;
else if (m==n)
    cout << "Friendship is magic!^^" << endl;

return 0;
}

