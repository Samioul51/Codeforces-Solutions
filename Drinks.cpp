/*

Link: https://codeforces.com/contest/200/problem/B

*/

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int t,i;
cin>>t;
int a[t];
for(i=0;i<t;i++){
    cin>> a[i];
}
double sum=0;
for(i=0;i<t;i++){
    sum+=a[i];
}
cout.setf(ios::fixed);
if((sum/t)<=10)
    cout<<  setprecision(13) << (sum/t)<< endl;
else if((sum/t)<=100)
    cout<< setprecision(14) << (sum/t)<< endl;
else if((sum/t)<=1000)
    cout<< setprecision(15) << (sum/t)<< endl;
else if((sum/t)<=10000)
    cout<< fixed <<setprecision(16) << (sum/t)<< endl;
else if((sum/t)<=100000)
    cout<< setprecision(17) << (sum/t)<< endl;
else if((sum/t)<=1000000)
    cout<< setprecision(18) << (sum/t)<< endl;
}
