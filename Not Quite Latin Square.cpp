/*

Link: https://codeforces.com/contest/1915/problem/B

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >>t;
while(t--){
char a[3][3];
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
{
    cin >> a[i][j];

}}
int d=-1;
char p;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(a[i][j]!= 'A' && a[i][j]!= 'B' && a[i][j]!= 'C')
            {d = i;
            break;}

    }
    if(d!=-1)
            break;}
if(a[i][0]== 'A' || a[i][1]== 'A' || a[i][2] == 'A'){
    if(a[i][0]== 'B' || a[i][1]== 'B' || a[i][2]== 'B'){
        p = 'C';
    }
    else{
        p= 'B';
    }
}
else{
    p='A';}
cout << p << endl;
}


}
 