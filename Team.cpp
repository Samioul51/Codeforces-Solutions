/*
Link: https://codeforces.com/contest/231/problem/A
*/
#include<stdio.h>
 
int main()
 
{
int n;
int m = 0;
int i;
int a,b,c;
scanf("%d", &n);
for ( i = 0; i<n ; i++)
{
    scanf("%d%d%d", &a, &b, &c);
    if ((a != 0 && b !=0) || (a != 0 && c != 0) || (b !=0 && c!=0))
        m++;
 
 
}
 
printf("%d", m);
return 0;
 
}