/*

Link: https://codeforces.com/contest/133/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
string s;
cin>> s;
int c=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
    {
        c=1;
        break;
    }
}
if(c==1)
    cout <<"YES" <<endl;
else
    cout << "NO" <<endl;
return 0;
}