//ac
#include<iostream>
#include<cstdio>
int main()
{
        long long int t,n,o,x,c;
        scanf("%lld", &t);
        c=t;
        while(t--)
        {
            x=1;
            o=1;
            scanf("%lld", &n);
            long long int a[n];
            for(int i=0;i<n;i++)
            {
                scanf("%lld", &a[i]);
                x +=a[i];
                if(x<1)
                {
                    o += 1-x;
                    x = 1;
                }
            }
            printf("Scenario #%lld: %lld\n", c-t,o);
        }
        return 0;
}
