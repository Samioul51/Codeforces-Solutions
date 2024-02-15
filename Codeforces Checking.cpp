/*

Link: https://codeforces.com/contest/1791/problem/A

*/


#include<iostream>
#include<string>
using namespace std;

int main(){
int t,i;
cin >> t;
char c[t];
for(i=0;i<t;i++)
{
cin >> c[i];


}
for(i=0;i<t;i++)
{
if(c[i] == 'c' || c[i] == 'o' || c[i] == 'd' || c[i] == 'e' || c[i] == 'f' || c[i] == 'r' || c[i] == 's')
    cout << "YES" << endl;
else
    cout << "NO" << endl;

}

return 0;
}

