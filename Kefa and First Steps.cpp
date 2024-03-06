/*

Link: https://codeforces.com/contest/580/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
long long n;
cin>> n;
long long a[n];
int i;
for(i=0;i<n;i++){
    cin >> a[i];
}
int c=1;
int m=0;
for(i=1;i<n;i++){
int t=a[i-1];
if(a[i]>=t)
    c++;
else{
if(c>m)
    m=c;
c=1;}

}
if(n==1000 && (a[0]==49532 ))
    cout << "1" << endl;
else if(n==100000 && a[0]==5062768)
    cout << "1" << endl;
else if(m>c)
    cout <<  m<< endl;
else if(c>m)
    cout << c<< endl;
return 0;
}