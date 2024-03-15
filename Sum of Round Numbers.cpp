/*

Link: https://codeforces.com/contest/1352/problem/A

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
cin>>t;
while(t--){
    int n;
    cin>> n;
    int c=0;
    vector<int>v;
    int i=1;
    while(n>0){
        int a=n%10;
        if(a!=0){
        int s=a*i;
        v.push_back(s);
        c++;
        }

        i*=10;
        n/=10;
    }
    cout << c << endl;
    for(int k=0;k<v.size();k++){
        cout << v[k] << " ";
    }
    cout << endl;
}
return 0;
}
