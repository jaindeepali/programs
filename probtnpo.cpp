//tle
#include<iostream>
#include<cstdio>
using namespace std;
int f(int x)
{
    int c=0;
    while(1)
    {
        c++;
        if(x==1)
            return c;
        else if(x%2==1)
            x=3*x+1;
        else if(x%2==0)
            x=x/2;
    }
}
int main()
{
    int i,j,n,k,m;
    scanf("%d %d", &i,&j);
    while(i||j)
    {
        printf("%d %d ", i,j);
        n=f(i);
        for(k=i+1;k<=j;k++)
        {
            m=f(k);
            if(m>n)
                n=m;
        }
        printf("%d\n", n);
        scanf("%d %d", &i,&j);
    }
    return 0;
}
