/*

Link: https://codeforces.com/contest/734/problem/A

*/


#include<iostream>
#include<string>

using namespace std;
int main(){
int i, j, m =0,n =0 ;
string s;
cin >> j >> s;

for(i= 0 ;i <s.length() ;i++)
{
if (s[i] == 'A')
    m++;
else if (s[i]== 'D')
    n++;

}
if( m> n)
    cout << "Anton" <<endl;
else if (m<n)
    cout << "Danik" << endl;
else if (m == n)
    cout << "Friendship" << endl;

return 0;
}




