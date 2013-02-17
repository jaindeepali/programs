//bigint
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int t,n,i,s;
    scanf("%d", &t);
    while(t--)
    {
        s=0;
        scanf("%lld", &n);
        for(i=0;i<n;i++)
        {
            s=(s+pow(2,i))%1298074214633706835075030044377087;
        }
        s=s%1298074214633706835075030044377087;
        printf("%lld\n", s);
    }
    return 0;
}
