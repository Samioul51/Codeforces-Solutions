/*

Link: https://codeforces.com/contest/96/problem/A

*/

#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
string s;
cin >> s;
int n= s.size();
int i,j,counter=0;;
for(i=0;i<n;i++){
 int count=0;
for(j=i+1;j<n;j++){
  if(s[i]==s[j])
      count++;
  else
      break;
   }
   if(count==6)
      { counter=1;
       break;}
       }
 if(counter==0)
     cout << "NO";
 else
     cout <<"YES";
     }    
