#include<iostream>
using namespace std;
double fact(int x)
{
int s[21];
s[0]=1;
for(int i=1;i<=x;i++)
{
s[i]=i*s[i-1];
}
return s[x];
}
int main()
{
double e[21];
e[0]=1;
for(int i=0;i<=20;i++)
{
e[i]=e[i-1]+(1/fact(i));
}
cout<<e[20];
return 0;
}
