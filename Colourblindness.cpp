/*

Link: https://codeforces.com/contest/1722/problem/B

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
cin>>n;
char a[2][n];
int i,j;
for(i=0;i<2;i++){
    for(j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int counter=1;
for(i=0;i<n;i++){
  if((a[0][i]=='G' && a[1][i]=='B') || (a[0][i]=='B' && a[1][i]=='G'))
    counter=1;
  else if(a[0][i]==a[1][i])
    counter=1;
  else if(a[0][i]!=a[1][i])
  {
      counter=0;
      break;
  }
}
if(counter==1)
    cout << "YES" <<endl;
else
    cout << "NO" << endl;
}
return 0;
}
