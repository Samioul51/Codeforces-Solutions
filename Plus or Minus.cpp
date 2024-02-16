/*

Link: https://codeforces.com/contest/1807/problem/A

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
int x;
cin>> x ;
while(x--){
    int p,q,r;
    cin >> p >> q >> r;
    if((p+q)==r)
        cout << "+" << endl;
    else if((p-q)==r)
        cout << "-" << endl;
}
}

