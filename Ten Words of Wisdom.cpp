/*

Link: https://codeforces.com/contest/1850/problem/B

*/

#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],b[n];
int i;
for(i=0;i<n;i++){
    cin>> a[i] >> b[i];
}
int maxi=0;
int ind=-1;
for(i=0;i<n;i++){
    if(a[i]<=10 && b[i]>maxi && b[i]<=50)
        {
            maxi=b[i];
            ind =i;
        }
}
int r=ind+1;
cout << r << endl;
}
}