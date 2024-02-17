/*

Link: https://codeforces.com/contest/266/problem/A

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
string a;
cin >> a;
int counter = 0;
for(int i=0;i<a.size()-1;i++){
  if(a[i]==a[i+1])
    counter++;

    }
cout << counter << endl;

}
