//ac
#include<iostream>
#include<cstdio>
using namespace std;
int fact(int n)
{
    if(n<=1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n,k,o,s;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        int a[k];
        s=1;
        for(int i=0;i<k;i++)
        {
            //cin>>a[i];
            scanf("%d",&a[i]);
            //cout<<a[i]<<" "<<s;
            s=s*fact(a[i]);
            //cout<<s;
        }
        o=fact(n)/s;
        printf("%d\n", o);
    }
return 0;
}
