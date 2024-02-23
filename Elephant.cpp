/*

Link: https://codeforces.com/contest/617/problem/A

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
int count=0;
int i;
while(n){
    if(n/5>=1){
        n-=5;
        count++;
    }
    else if(n/4>=1){
        n-=4;
        count++;
    }
    else if(n/3>=1){
        n-=3;
        count++;
    }
    else if(n/2>=1){
        n-=2;
        count++;
    }
    else if(n/1>=1){
        n-=1;
        count++;
    }
}
cout << count << endl;
}