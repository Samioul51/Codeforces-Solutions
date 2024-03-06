/*

Link: https://codeforces.com/contest/1017/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int n;
cin >> n;
int a[n][4];
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<4;j++){
        cin>> a[i][j];
    }
}
vector<int>v;
for(i=0;i<n;i++){
        v.push_back(0);
    for(j=0;j<4;j++){
        v[i]+=a[i][j];
    }
}
int smith= v[0];
int pos;
sort(v.begin(), v.end());

for(i=v.size()-1;i>=0;i--){
    if(v[i]==smith){
        pos=i;
        break;
    }
}
cout << n-pos << endl;
return 0;
}