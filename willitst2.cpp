//ac
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    unsigned long long int n;
    scanf("%lld", &n);
    if(n==0||n==1)
        printf("TAK\n");
    else
        while(n%2==0)
        {
            n=n/2;
        }
        if(n==1)
            printf("TAK\n");
        else
            printf("NIE\n");
    return 0;
}
