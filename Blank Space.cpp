/*

Link: https://codeforces.com/contest/1829/problem/B

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
int n;
cin >> n;
vector<int>v;
int i;
for(i=0;i<n;i++){
    int p;
    cin >> p;
    v.push_back(p);
}
int c=0;
int d=0;
int zero=0;
for(i=0;i<v.size();i++){
    if(v[i]==0)
        zero++;
}
if(zero==1)
    cout << "1" << endl;
else{
for(i=0;i<v.size()-1;i++){
    if(v[i]==0){
        d++;
        
        for(int j=i+1;j<v.size();j++){
            if(v[j]==0)
                d++;
            else
                break;

        }
        
    }
    if(d>c)
            c=d;
    d=0;
}
cout << c << endl;}
}

return 0;
}
