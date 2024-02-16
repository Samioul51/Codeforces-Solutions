/*

Link: https://codeforces.com/contest/750/problem/A

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,i,count = 0,sum;
cin >> n >> k;
sum = k;
for(i=1;i<=n;i++){
sum += i*5;
if(sum <=240)
    count++;
}
cout << count << endl;
return 0;
}

