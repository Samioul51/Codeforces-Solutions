/*

Link: https://codeforces.com/contest/1850/problem/A

*/


#include<iostream>

using namespace std;


int main()
{
int n;
cin >> n;
int a[n],b[n],c[n];
int i;

for(i=0;i<n;i++)
{
cin >> a[i] >> b[i] >> c[i];
}

for(i=0;i<n;i++)
{
if (a[i]+b[i] >= 10)
    cout << "YES" << endl;

else if (a[i]+c[i] >= 10)
    cout << "YES" << endl;

else if (c[i]+b[i] >= 10)
    cout << "YES" << endl;

else
    cout << "NO" << endl;
}
return 0;
}

