/*

Link: https://codeforces.com/contest/677/problem/A

*/


#include<iostream>

using namespace std;

int main()
{
int a, b,i,w=0;
cin >> a >> b;
int c[a];
int d[a];
for(i=0;i<a;i++)
{

cin >> c[i];

}
for(i=0;i<a;i++)
{
if (c[i]> b)
    d[i] = 2;
else
    d[i] = 1;


}
for(i=0;i<a;i++)
{

w += d[i];

}

cout << w << endl;
return 0;
}
