/*

Link: https://codeforces.com/contest/118/problem/A

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
cin>> a;
vector<char>vec;
int i;
for(i=0;i<a.size();i++){
    if((int)a[i]<97)
        a[i]+=32;
}
for(i=0;i<a.size();i++){
     if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y')
        vec.push_back(a[i]);


}
if(vec.size()==1){
    cout<< ".";
    cout<< vec[0];}
else{
for(i=0;i<vec.size();i++){
 cout << "." << vec[i];
}}
}