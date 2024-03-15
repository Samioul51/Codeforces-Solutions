/*

Link: https://codeforces.com/contest/1829/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int t;
cin >> t;
while(t--){
    string d= "codeforces";
    string s;
    cin >> s;
    int c=0;
    for(int i=0;i<10;i++){
        if(s[i]!=d[i])
            c++;
    }
    cout << c << endl;
}

return 0;
}
