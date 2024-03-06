/*

Link: https://codeforces.com/contest/469/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
int level;
cin >> level;
int a,b,i;
cin >> a;
int x[a];
for(i=0;i<a;i++){
    cin >> x[i];
}
cin >> b;
int y[b];
for(i=0;i<b;i++){
    cin >> y[i];
}
int count=0;
vector<int>p;
for(i=0;i<a;i++){
    p.push_back(x[i]);
}
for(i=0;i<b;i++){
    p.push_back(y[i]);
}
sort(p.begin(), p.end());
for(i=0;i<p.size();i++){
  while(i<p.size()-1 && p[i]==p[i+1]){
    i++;
  }
  count++;
}

if((count)==level)
    cout << "I become the guy." << endl;
else
    cout << "Oh, my keyboard!" << endl;
return 0;
}