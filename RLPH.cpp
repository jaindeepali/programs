//ac
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
        const double PI=2*acos(0.0);
        long long int t,c;
        double r,u,a;
        scanf("%lld", &t);
        c=t;
        while(t--)
        {
            scanf("%lf %lf", &r,&u);
            a=0.5*(asin(r*9.806/(u*u))*180/PI);
            if(a>=0 && a<=45)
                printf("Scenario #%lld: %.2lf\n", c-t,a);
            else
                printf("Scenario #%lld: %d\n", c-t,-1);
        }
        return 0;
}
