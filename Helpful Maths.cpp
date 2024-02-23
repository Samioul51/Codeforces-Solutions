/*

Link: https://codeforces.com/contest/339/problem/A

*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+7
#define SIR                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main(){
SIR;
string a;
cin >> a;
bool swapped;
vector<int>vec;
int i,j;
for(i=0;i<a.size();i++){
    if(a[i]>='0' && a[i]<='9')
        vec.push_back(a[i]);
}
for (i = 0; i < vec.size() - 1; i++) {
        swapped = false;
        for (j = 0; j < vec.size() - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
}
if(vec.size()==1)
    cout << vec[0]-48 << endl;
else{
for(i=0;i<vec.size()-1;i++){
    cout << vec[i]-48 <<"+";}
    cout << vec[vec.size()-1]-48<<endl;
}
}