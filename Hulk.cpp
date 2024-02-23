/*

Link: https://codeforces.com/contest/705/problem/A

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
if(n==1)
    cout << "I hate it" << endl;
else
{   cout << "I hate";
    n--;//2
    if(n>=2 && n%2==0){
    while(n>0){
        cout <<" that ";
        if(n%2==0)
            cout<< "I love";
        else if(n%2!=0 || n==1)
            cout<<"I hate";

        n--;
    }
    cout << " it" << endl;
}
    else if(n%2!=0 || n==1){
    while(n>0){
        cout <<" that ";
        if(n%2!=0 || n==1)
            cout<< "I love";
        else if(n%2==0)
            cout<<"I hate";

        n--;
    }
    cout << " it" << endl;
}
}}

 