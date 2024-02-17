/*

Link: https://codeforces.com/contest/1873/problem/B

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>> n;
int a[n];
int i;
for(i=0;i<n;i++){

cin >> a[i];

}
int small=a[0];
int c=0;
for(i=1;i<n;i++){
if(small>a[i]){
    small=a[i];
    c=i;}
}

small+=1;
a[c]=small;

int pro=1;
for(i=0;i<n;i++){
pro*=a[i];

}
cout<< pro<< endl;
}

}
 