/*

Link: https://codeforces.com/contest/59/problem/A

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
int i;
int cap=0,small=0;
for(i=0;i<a.size();i++){
    if(a[i]<97)
        cap++;
    else if(a[i]>=97)
        small++;
}
if(cap>small)
    {
for(i=0;i<a.size();i++)
{
    if(a[i]>=97)
         a[i]-=32;
} }
else{
for(i=0;i<a.size();i++)
{
    if(a[i]<97)
         a[i]+=32;
} }

cout << a<< endl;

return 0;
}