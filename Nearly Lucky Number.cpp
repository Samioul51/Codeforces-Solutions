/*

Link: https://codeforces.com/contest/110/problem/A

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin >> n;
int m=1;
int count=0;
while(n!=0){
    if(n%10==7 || n%10==4)
        count++;
    n/=10;
}
if(count==7 || count==4)
    cout<< "YES" << endl;
else
    cout << "NO" << endl;
}
 