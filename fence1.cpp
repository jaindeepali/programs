//ac
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int l;
    const double pie=4*atan(1);
    scanf("%d", &l);
    while(l)
    {
        printf("%.2lf\n", ((l*l)/(2*pie)));
        scanf("%d", &l);
    }
    return 0;
}
