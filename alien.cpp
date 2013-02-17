//wa
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int t,a,b,k,n,i,j,s,c;
    scanf("%d", &t);
    while(t--)
    {
        k=0;n=0;
        scanf("%d %d", &a,&b);
        int x[a];
        for(i=0;i<a;i++)
            scanf("%d", &x[i]);
        for(i=0;i<a-1;i++)
        {
            s=x[i];
            for(c=1,j=i+1;j<a;c++,j++)
            {
                if(s>b)
                {
                    break;
                }
                s=s+x[j];
            }
            if(s>k)
            {
                k=s-x[j-1];
                n=c-1;
            }
        }
        cout<<k<<" "<<c;
    }
    cout<<"\n";
    return 0;
}
