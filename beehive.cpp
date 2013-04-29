//ac
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool isInt(double n)
{
    if(n-floor(n)==0)
        return true;
    else
        return false;
}
int main()
{
    long long int t;
    double n,d;
    scanf("%lld", &t);
    while(t!=-1)
    {
        d=sqrt(12*t-3);
        n=(d-3)/6;
        if(isInt(n))
            printf("Y\n");
        else
            printf("N\n");
        scanf("%lld", &t);
    }
return 0;
}
