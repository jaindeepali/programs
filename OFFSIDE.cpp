//ac
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a,d,p,q;
    scanf("%d %d", &a,&d);
    while(a && d)
    {
        int b[a],c[d];
        for(int i=0;i<a;i++)
            scanf("%d",&b[i]);
        for(int i=0;i<d;i++)
            scanf("%d",&c[i]);
        sort(b,b+a);
        sort(c,c+d);
        p=b[0];
        q=c[1];
        if(p<q)
            printf("Y\n");
        else
            printf("N\n");
        scanf("%d %d", &a,&d);
    }
return 0;
}
