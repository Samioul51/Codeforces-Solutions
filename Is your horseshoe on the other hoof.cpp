/*

Link: https://codeforces.com/contest/228/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int a[4];
int i,j,n=4;
for(i=0;i<n;i++){
    cin >> a[i];
}
int dup=0;
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j])
        {
            dup++;
            break;

        }
    }
}
cout << dup << endl;
return 0;
}