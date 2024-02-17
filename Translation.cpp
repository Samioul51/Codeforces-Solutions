/*

Link: https://codeforces.com/contest/41/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b;
int i=0;
cin >> a >> b;
int len=a.size();
int j=len-1;
int count=0;
while(i<len){
  if(a[i]==b[j]){
    count++;
    }
  i++;
  j--;
}
if(count==len)
    cout << "YES" <<endl;
else
    cout << "NO" <<endl;
}