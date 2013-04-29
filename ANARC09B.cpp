//ac
#include<iostream>
#include<cstdio>
using namespace std;
int gcd(long long int a, long long int b){
    if (b == 0)
       return a;
    else
       return gcd(b, a%b);
}
int main()
{
    long long int a,b,g,o;
    scanf("%lld %lld", &a,&b);
    while(a!=0 && b!=0)
    {
        if(a>b)
            g=gcd(a,b);
        else
            g=gcd(b,a);
        a=a/g;
        b=b/g;
        o=a*b;
        printf("%lld\n", o);
        scanf("%lld %lld", &a,&b);
    }
return 0;
}
