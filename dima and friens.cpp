#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    int n,s=0;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d", &n);
        s=s+n;
    }
    int c=0;
    for(int i=1;i<=5;i++)
    {
        if((s+i-1)%(t+1)!=0)
        {
            c++;
        }
    }
    printf("%d", c);
return 0;
}
