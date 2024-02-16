/*

Link: https://codeforces.com/contest/1335/problem/A

*/


#include<iostream>

using namespace std;
int main()
{
int n,i;
cin>> n;
long int a[n];
long int count[n];
for(i=0;i<n;i++)
{
    cin>> a[i];
    count[i]=0;
}
for(i=0;i<n;i++)
{
    if(a[i] == 1)
        count[i] =0;
    else if(a[i]==2)
        count[i] =0;
    else if (a[i]%2 ==0)
        count[i] = a[i]/2 - 1;
    else
        count[i] = a[i]/2;
}
for(i=0;i<n;i++)
{
    cout << count[i] << endl;
}
return 0;
}

