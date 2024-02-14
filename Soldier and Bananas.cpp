/*

Link: https://codeforces.com/contest/546/problem/A

*/


#include<iostream>
#include<string>

using namespace std;
int main(){
int k,n,w,m=0,i;
cin >> k >> n >> w;

for(i=1;i<=w;i++)
{

m += (i*k);

}

int q = m- n;
if (m <=n )
    cout << 0;
else
    cout << q;
return 0;
}




