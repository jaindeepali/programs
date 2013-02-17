//ac
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    double n,o;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf", &n);
        o=0.75-(1/(2*(n+1)*(n+2)));
        printf("%.11lf\n", o);
    }
return 0;
}
