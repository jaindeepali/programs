//tle
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
while(b)
    {int r = a % b; a = b; b = r;}
return a;
}
int totient(int x)
{
    int c=0;
    for(int i=1;i<=x;i++)
    {
        if(gcd(x,i)==1)
            c++;
    }
    return c;
}
int tot(int x)
{
    double pi=atan(1)*4;
    double res=0;
    for(int i=1;i<=x;i++)
    {
        res=res+gcd(i,x)*cos(2*pi*((double)i/(double)x));
    }
    return floor(res+0.5);
}
int main()
{
    int t,h,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        h=0;
        for( i=1;i<=n;i++)
        {
            for( j=1;j<=n;j++)
            {
                h=h+totient(i)*totient(j);
            }
        }
        cout<<h<<endl;
    }
return 0;
}
