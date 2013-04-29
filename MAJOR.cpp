//ac
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,t,n,o,b,pos[1001],neg[1001];
    scanf("%d", &t);
    while(t--)
    {
        o=10001;
        for(i=0;i<1001;i++)
        {
            pos[i]=0;
            neg[i]=0;
        }
        scanf("%d", &n);
        int in[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&in[i]);
        }
        for(i=0;i<n;i++)
        {
            b=in[i];
            if(b>=0)
            {
                pos[b]++;
                if(pos[b]>(n/2))
                {
                    o=b;
                    break;
                }
                //cout<<a[b];
            }
            else
            {
                neg[-1*b]++;
                if(neg[-1*b]>(n/2))
                {
                    o=b;
                    break;
                }
                //cout<<a[b];
            }
        }
        if(o==10001)
            printf("NO\n");
        else
            printf("YES %d\n", o);
    }
return 0;
}
