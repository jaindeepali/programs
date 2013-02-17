//ac
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double n,o;
    scanf("%lf", &n);
    while(n!=-1)
    {
        o=(sqrt(12*n-3)-3)/6;
        if(ceil(o)==o)
            printf("Y\n");
        else
            printf("N\n");
        scanf("%lf", &n);
    }
return 0;
}
