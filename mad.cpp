//wa
#include<iostream>
#include<cstdio>
using namespace std;
void sort(int a[], int n)
{
    int temp;
    while(n--)
    {
        for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    }
}
void sd(int a[],int n,int m)
{
    for(int i=0;i<n/2;i++)
        a[i]=m-a[i];
    for(int i=n/2;i<n;i++)
        a[i]=a[i]-m;
}
int main()
{
    double med1,med2;
    int t,n,i,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,n);
        med1=(a[n/2]+a[(n-1)/2])/2;
        sd(a,n,med1);
        for(i=0;i<=n/2;i++)
        {
            if(a[i]!=0)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
