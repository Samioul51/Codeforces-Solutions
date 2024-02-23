/*

Link: https://codeforces.com/contest/263/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int a[5][5];
int m= 2;
int n=2;
int i,j;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        cin>> a[i][j];
    }


}
int r;
int c;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(a[i][j]==1)
        {
            r=i;
            c=j;
        }
    }


}
int resrow;
int rescol;
if(r>m && c> n )
{
    resrow=r-m;
    rescol=c-n;
}

else if(r>m && c<n ){
    resrow=r-m;
    rescol=n-c;
}
else if(r<m && c>n ){
    resrow=m-r;
    rescol=c-n;
}
else if(r<m && c<n){
    resrow=m-r;
    rescol=n-c;
}
else if(r==m && c==n){
    resrow=0;
    rescol=0;
}
else if(r==m && c<n){
    resrow=0;
    rescol=n-c;
}
else if(r==m && c>n){
    resrow=0;
    rescol=c-n;
}
else if(r<m && c==n){
    resrow=m-r;
    rescol=0;
}
else if(r>m && c==n){
    resrow=r-m;
    rescol=0;
}
cout << resrow+rescol << endl;
}