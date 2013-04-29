#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,q,c,i,j,k,l;
    scanf("%d %d", &n,&q);
    //n=getchar_unlocked();
    //q=getchar_unlocked();
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=0;
    }
    while(q--)
    {
        c=0;
        scanf("%d %d %d", &k,&i,&j);
        if(k==0)
        {
            for(l=i;l<=j;l++)
            {
                a[l]++;
            }
        }
        else
        {
            for(l=i;l<=j;l++)
            {
                if(a[l]%3==0)
                    c++;
            }
            printf("%d\n", c);
        }
    }
return 0;
}
