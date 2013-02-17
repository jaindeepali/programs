#include <iostream>
using namespace std;
long long int countsplitinv(int a[],int start,int mid,int n)
{

    int left[];
    int d[n+1],m=0,i=0,j=0;
    for(int k=start;k<n;k++)
    {
        if(b[i]<c[j])
        {
            d[k]=b[i];
            i++;
        }
        else
        {
            d[k]=c[j];
            j++;
            m=m+n/2-i+1;
        }
    }
    if(i==n/2)
        d[n]=b[i];
    else
        d[n]=c[j];
    res.ar=d;
    res.c=m;
    return res;
}
list count(int a[],int start,int n)
{
    list x,y,z,res;
    res.ar=new int;
    int mid=(start+n)/2;
    if(start==n)
    {
        res.ar[0]=a[n];
        res.c=0;
        return res;
    }
    else
    {
        x=count(a,start,mid/2);
        y=count(a,(mid/2)+1,n);
        z=countsplitinv(x.ar,y.ar,start,n);
    }
    res.ar=z.ar;
    res.c=x.c+y.c+z.c;
    return res;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<count(a,0,4).c;
    return 0;
}
