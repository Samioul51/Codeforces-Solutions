/*

Link: https://codeforces.com/contest/1676/problem/B

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int t,i;
cin>>t;
while(t--){
int n;
cin >> n ;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
int minn=a[0];
int minindex=0;
for(i=1;i<n;i++){
    if(a[i]<minn){
        minn=a[i];
        minindex=i;
    }
}
int c=0;
for(i=0;i<n;i++){
    if(i==minindex)
        continue;
    c+=(a[i]-minn);
}
cout << c << endl;
}
return 0;
}
