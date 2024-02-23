/*

Link: https://codeforces.com/contest/112/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
string a,b;
cin>> a >> b;
int i;
int r =0;
for(i=0;i<a.size();i++){
    if((int)a[i]<97)
       a[i]+=32;
    if((int)b[i]<97)
        b[i]+=32;

    {
        if((int)a[i]==(int)b[i] )
    {
     r=0;
    }
    else if((int)a[i]>(int)b[i] ){
        r=1;
        break;
    }
    else if((int)a[i]<(int)b[i] ){
        r=-1;
        break;
    }
    }
}
cout << r << endl;
}