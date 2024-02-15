/*

Link: https://codeforces.com/contest/1669/problem/A

*/


#include<iostream>
using namespace std;

int main(){
int t,i;
cin >> t;
int r[t];
for(i=0;i<t;i++){
cin >> r[i];
}
for(i=0;i<t;i++){
if(r[i] >= 1900)
    cout<< "Division 1" <<endl;
else if(r[i] >= 1600 && r[i]<=1899)
    cout<< "Division 2" <<endl;
else if(r[i] >= 1400 && r[i] <=1599)
    cout<< "Division 3" <<endl;
else if(r[i] <= 1399)
    cout<< "Division 4" <<endl;
}

return 0;

}

