/*

Link: https://codeforces.com/problemset/problem/144/A

*/




#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;

int main(){
SIR;
ll n,i;
cin >>n;
vector<ll>v;
for(i=0;i<n;i++){
    ll p;
    cin>>p;
    v.push_back(p);
}
ll minn=*min_element(v.begin(),v.end());
ll maxx=*max_element(v.begin(),v.end());
vector<ll>minpos;
vector<ll>maxpos;
ll minlate=-1;;
ll maxfirst;
for(i=0;i<n;i++){
    if(v[i]==minn){
        minlate=i;
        minpos.push_back(i);
    }
}
for(i=0;i<n;i++){
    if(v[i]==maxx){
        maxpos.push_back(i);
    }
}
maxfirst=maxpos[0];

ll minshift;
ll maxshift;

if(maxfirst<minlate)
{
    minshift=(v.size()-1)-minpos[minpos.size()-1];
    maxshift=(maxpos[0]);
}
else
{
minshift=(v.size()-1)-minpos[minpos.size()-1];
maxshift=(maxpos[0]-1); 
}


cout << minshift+maxshift << endl;

return 0;
}
