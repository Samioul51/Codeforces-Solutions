/*

Link: https://codeforces.com/contest/1921/problem/A

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int x[4];
int y[4];
int i;
for(i=0;i<4;i++){

cin >> x[i] >> y[i];

}
int dummy,dummy1;
for(i=0;i<4;i++){
for(int j=1;j<4;j++){

if(x[i]==x[j]){
dummy=i;
dummy1=j;
break;
}

}

break;
}
int sub= (x[dummy]-x[dummy1])*(x[dummy]-x[dummy1]);
int sub2= (y[dummy]-y[dummy1])*(y[dummy]-y[dummy1]);
int ar= sub+sub2;
int side=sqrt(ar);
cout<< side*side<< endl;

}


}
 