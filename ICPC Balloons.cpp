/*

Link: https://codeforces.com/contest/1703/problem/B

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
string s;
cin>>s;
int c=0;
int i,j;
string d= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
sort(s.begin(),s.end());
for(i=0;i<d.size();i++){
        int count=0;
    for(j=0;j<s.size();j++){
        if(d[i]==s[j]){
            count++;
        }
    }
    if(count==1)
        c+=2;
    else if(count>1)
        c+=(count+1);
}
cout << c << endl;
}
return 0;
}
