/*

Link: https://codeforces.com/contest/32/problem/B

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
string s;
cin >> s;
int i;
for(i=0;i<s.size();i++){
    if(s[i]=='-' && s[i+1]!='/0' && s[i+1]=='-' ){
        cout << "2";
        i++;
    }
    else if(s[i]=='-' && s[i+1]!='/0' && s[i+1]=='.' ){
        cout << "1";
        i++;
    }
    else if(s[i]=='.')
        cout << "0";
}
cout << endl;
}
