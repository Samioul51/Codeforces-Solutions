/*

Link: https://codeforces.com/contest/977/problem/A

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
int k;
cin>> n >> k;
int d;
while(k){
    if(n%10!=0)
        n-=1;
    else
        n/=10;
k--;
}
cout << n <<endl;
}