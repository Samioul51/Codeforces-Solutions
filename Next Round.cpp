/*

Link: https://codeforces.com/contest/158/problem/A

*/


#include<iostream>
using namespace std;
int main(){
int n,k,i;
cin >> n >> k;
int p[n];
for(i=0;i<n;i++)
{
cin >> p[i];
}
int count = 0;
for(i=0;i<k;i++)
{
    if(p[i]>0)
        count++;
}
for(i=k;i<n;i++){
if(p[i]>0 && p[i]==p[k-1])
    count++;
}
cout << count << endl;
return 0;
}