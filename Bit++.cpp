/*

Link: https://codeforces.com/contest/282/problem/A

*/


#include<iostream>

using namespace std;

int main()
{
int n,m=0,i;
cin >> n;
string s[n];
for(i=0;i<n;i++)
{
cin >> s[i];

}

for(i=0;i<n;i++)
{
if(s[i]== "X++" || s[i] == "++X")
    m++;
else if (s[i] == "X--" || s[i] == "--X")
    m--;


}

cout << m << endl;

return 0;
}

