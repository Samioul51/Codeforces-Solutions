/*

Link: https://codeforces.com/contest/116/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int a[n],b[n];
int i;
for(i=0;i<n;i++){
cin >> a[i] >> b[i];


}

int sum=0;
int max=a[0];
for(i=0;i<n;i++){
sum=sum-a[i]+b[i];
if(sum>max)
    max=sum;

}
cout << max << endl;

}