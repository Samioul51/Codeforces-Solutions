/*

Link: https://codeforces.com/contest/785/problem/A

*/


#include<iostream>
#include<string>
using namespace std;
int main()
{
int n,i;
cin>> n;
string a[n];
int count = 0;
for(i=0;i<n;i++)
{
cin >> a[i];
}
for(i=0;i<n;i++)
{
if(a[i] == "Tetrahedron")
    count+=4;
else if(a[i] == "Cube")
    count +=6;
else if(a[i] == "Octahedron")
    count +=8;
else if(a[i] == "Dodecahedron")
    count +=12;
else if(a[i] == "Icosahedron")
    count +=20;

}

cout << count << endl;
}

