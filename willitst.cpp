//wa
#include <iostream>
#include <cstdio>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int n;
    scanf("%lld", &n);
    double k=log(n)/log(2);
    if(n==0||n==1)
        printf("TAK\n");
    else if(k-(int)k==0)
        printf("TAK\n");
    else
        printf("NIE\n");
    return 0;
}
