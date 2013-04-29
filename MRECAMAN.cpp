//ac
#include<iostream>
#include<cstdio>
int main()
{
        long long int a[500001];
        static long long int b[3500001];
        a[0]=0;
        long long int i,num;
        for(i=1;i<=500000;i++)
        {
                if(a[i-1]-i>0&&b[a[i-1]-i]!=1)
                {
                a[i]=a[i-1]-i;
                }
                else {
                a[i]=a[i-1]+i;
                }
                b[a[i]]=1;
                //printf("%lld\n",a[i]);
        }
        scanf("%lld",&num);
        while(num>0)
        {
        printf("%lld\n",a[num]);
        scanf("%lld",&num);
        }
        return 0;
}
