#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int k,t;
    double i;
    long long int n,a,x,j,b,c,m;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld %d", &n,&k);
        long long int s[k];
        a=k*k;
        cout<<"a="<<a<<" ";
        b=k*(2*k+1);
        cout<<"b="<<b<<" ";
        c=k*(k+1)-2*n;
        cout<<"c="<<c<<" ";
        i=(-1*b+sqrt(b*b-4*a*c))/(2*a);
        cout<<"i="<<i<<" ";
        x=floor(i);
        cout<<"x="<<x<<" ";
        m=(k*(x+1)*(k*(x+1)+1))/2;
        cout<<"m="<<m<<" ";
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
