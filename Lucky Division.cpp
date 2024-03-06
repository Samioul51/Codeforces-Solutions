/*

Link: https://codeforces.com/contest/122/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int n,i;
cin >> n;
if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%477==0 || n%744==0)
    cout << "YES" << endl;

else
    cout << "NO" << endl;
}