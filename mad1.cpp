//ac
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()

{
    int t,n,i,c,k;
    scanf("%d", &t);
    esc: while(t--)
    {
        scanf("%d", &n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        if(n==1)
        {
            printf("0\n");
            goto esc;
        }
        sort(a,a+n);
        i=1;k=0;
        while(i<n)
        {
            c=0;
            while(1)
            {
                if(a[i]==a[i-1])
                    c++;
                else
                    break;
                i++;
            }
            i++;
            if(c>k)
                k=c;
        }
        if((n/2)-k>0)
            printf("%d\n", (n/2)-k);
        else
            printf("0\n");
    }
    return 0;
}
