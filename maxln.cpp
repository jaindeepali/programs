//ac
#include<iostream>
#include<cstdio>
int main()
{
    int t,x=1;
    unsigned long long int r;
    double o;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &r);
        o=4*r*r+0.25;
        printf("Case %d: %.2f\n", x,o);
        x++;
    }
    return 0;
}
