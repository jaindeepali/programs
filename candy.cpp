//ac
#include <iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
int n,i,s,m,k;
int* a=new int;
cin>>n;
while(n!=-1)
{
    s=0;k=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    m=s/n;
    if(s%n==0)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>m)
            {
                k=k+a[i]-m;
            }
        }
        cout<<k<<endl;
    }
    else
        cout<<"-1"<<endl;
    cin>>n;
}
return 0;
}
