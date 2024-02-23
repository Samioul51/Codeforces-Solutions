/*

Link: https://codeforces.com/contest/236/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
string a;
cin>>a;
vector<int>vec;
int i,j;
for(i=0;i<a.size();i++){
    vec.push_back((int)a[i]);
}

int count=0;
for(i=0;i<vec.size();i++){
        int a=1;
    for(j=i+1;j<vec.size();j++){
        if(vec[i]==vec[j]){
            a=0;
            break;
        }
    }
        if(a==1)
            count++;
}
if(count==0 || (count%2==0))
    cout << "CHAT WITH HER!" << endl;
else
    cout << "IGNORE HIM!" << endl;
}