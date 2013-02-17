//tle
#include <iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int i,t,n,k=0,p;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        bool a[n+1];
        for(i=2;i<=n;i++)
            a[i]=0;
        p=n;
        while(p)
        {
            for(i=2;i<=sqrt(p);i++)
            {
                if(p%i==0)
                {
                    if(a[i]==0)
                    {
                        a[i]=1;
                        k++;
                    }
                    if(a[p/i]==0&&p!=i*i)
                    {
                        a[p/i]=1;
                        k++;
                    }
                }
            }
            while(p)
            {
                p--;
                if(a[p]==0)
                    break;
            }
        }
        printf("%d\n", n-1-k);
    }
return 0;
}
