/*

Link: https://codeforces.com/contest/467/problem/A

*/


#include<bits/stdc++.h>
using namespace std;

int main(){

int t,counter=0;
cin >> t;
while(t--){
    int a, b;
    cin >> a >> b;
    if(a<b && a+2 <= b)
        counter++;

}
cout << counter << endl;
}