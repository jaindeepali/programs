//ac
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    unsigned long long n,o;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &n);
        o=250*n-58;
        printf("%lld\n", o);
    }
return 0;
}
