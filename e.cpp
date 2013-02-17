#include<iostream>
using namespace std;
int s[21]={0};
double f(int i)
{
    if(s[i]>0)
        return s[i];
    if(i==0||i==1)
        return 1;
    s[i]=i*s[i-1];
    return s[i];
}
int main()
{
    s[0]=1;
    double e[21];
    e[0]=1;
    for(int i=0;i<=20;i++)
    {
        e[i]=e[i-1]+(1/f(i));
    }
    cout<<e[20];
return 0;
}
