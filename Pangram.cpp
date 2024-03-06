/*

Link: https://codeforces.com/contest/520/problem/A

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
string s;
cin>> s;
string s2="abcdefghijklmnopqrstuvwxyz";
int c=0;
for(int i=0;i<s2.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[j]==s2[i] || s[j]+32==s2[i])
            {
                c++;
                break;
            }
        }
if(c==26)
    break;
}

if(c==26)
    cout <<"YES" << endl;
else
    cout <<"NO" << endl;

return 0;
}