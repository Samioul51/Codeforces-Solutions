/*

Link: https://codeforces.com/contest/1030/problem/A

*/


#include<iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int a[n];
int i;
int counter=0;
for(i=0;i<n;i++)
{
cin >> a[i];
}
for(i=0;i<n;i++)
{
if(a[i]== 1)
    counter = 1;
}
if ( counter == 0)
    cout << "EASY" <<endl;
else if (counter == 1)
    cout << "HARD" << endl;
return 0;
}

