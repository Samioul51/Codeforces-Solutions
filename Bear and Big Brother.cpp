/*

Link: https://codeforces.com/contest/791/problem/A

*/


#include<iostream>
#include<string>

using namespace std;
int main(){
int count = 0;
int m,n;

cin >> m >> n;
while(m <= n)
{

m *= 3;
n *= 2;
count++;


}

cout << count << endl;



return 0;
}



