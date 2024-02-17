/*

Link: https://codeforces.com/contest/1915/problem/C

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int buckets;
cin >> buckets;
int a[buckets];
for(int i=0;i< buckets;i++){
cin >> a[i];
}
double sum=0.0;
for(int i=0;i<buckets;i++){
sum += a[i];
}
int s=ceil(sqrt(sum));
int t=floor(sqrt(sum));
if(s== t)
    cout << "YES" << endl;
else
    cout << "NO" << endl;
}



}