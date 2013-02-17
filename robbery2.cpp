#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int k;
    double i,j,t;
    long long int n,a,x,b,c,m;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %d", &n,&k);
        unsigned long long int s[k];
        a=k*k;
        b=k*(2*k+1);
        c=k*(k+1)-2*n;
        i=(-1*b+sqrt(b*b-4*a*c))/(2*a);
        x=floor(i);
        m=(k*(x+1)*(k*(x+1)+1))/2;
        x=x+1;
        m=n-m;
        for(j=0;j<k;j++)
        {
            if(m>0)
            {
                s[j]=x*(j+1)+(k*x*(x-1))/2+min(m,(x)*k+j+1);
                m=m-min(m,(x)*k+j+1);
            }
            else
                s[j]=x*(j+1)+(k*x*(x-1))/2;
            cout<<s[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
