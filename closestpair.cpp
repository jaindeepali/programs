#include<iostream>
#include<cstdio>
using namespace std;
struct pair
{
    double px=0,qx=0,py=0,qy=0,d=0;
}
pair closest(double ar[][2],int n)
{
    pair result;
    int s=0;
    if(n==2)
    {
        result.px=ar[0][0];
        result.py=ar[0][1];
        result.qx=ar[1][0];
        result.qy=ar[1][1];
        result.d=sqrt((ar[0][0]-ar[1][0])*(ar[0][0]-ar[1][0])+(ar[0][1]-ar[1][1])*(ar[0][1]-ar[1][1]));
        return result;
    }
    for(int i=0;i<n;i++)
    {
        s=s+a[i][0];
    }
    s=s/n;
    int j=0,k=0;
    double x[n/2][2],y[n/2][2];
    for(int i=0;i<n;i++)
    {
        if(ar[i][0]<s)
        {
            x[j][0]=ar[i][0];
            x[j][1]=ar[i][1];
            j++;
        }
        else
        {
            y[k][0]=ar[i][0];
            y[k][1]=ar[i][1];
            k++;
        }
    }
    pair a=closest(x[][2],j);
    pair b=closest(y[][2],k);
    pair c=closestsplit(ar,n,min(a.d,b.d));
    result.d=min(a.d,b.d,c.d);
    if(a.d=result.d)
        result=a;
    else if(b.d=result.d)
        result=b;
    else
        result=c;
    return result;
}
pair closestsplit(double ar[][2],int n,double delta)
{

}
int main()
{
return 0;
}
