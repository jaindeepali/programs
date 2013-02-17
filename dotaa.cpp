//ac
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,c,m,d,i;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n>>m>>d;
        int h[n];
        for(i=0;i<n;i++)
        {
            cin>>h[i];
            if(h[i]>d)
                c=c+h[i]/d;
            if(h[i]%d==0)
                c--;
        }
        if(c>=m)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
