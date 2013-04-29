//wa
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,o=0,x;
    bool flag[732]={0};
    scanf("%lld",&n);
    while(n!=1)
    {
        x=n;
        n=0;
        while(x!=0)
        {
            n=n+(x%10)*(x%10);
            x=x/10;
        }
        o++;
        if(flag[n]==1)
        {
            printf("-1\n");
            goto esc;
        }
        else
        {
            flag[n]=1;
            x=n;
            n=0;
            while(x!=0)
            {
                n=n+(x%10)*(x%10);
                x=x/10;
            }
            o++;
        }
    }
    printf("%lld\n",o);
    esc:
    cin.ignore();
    cin.get();
    return 0;
}

