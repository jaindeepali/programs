#include<iostream>
using namespace std;
void merge(int a[],int p,int q,int r)
{
int c[r-p+1];
int i=p;
int j=q+1;
int k=p;
while((i<=q)&&(j<=r))
{
if(a[i]<a[j])
{
     c[k]=a[i];
      i=i+1;
}
else
{
     c[k]=a[j];
      j=j+1;
}
k++;
}
while(i<=q)
{
     c[k] =a[i];
     i=i+1;
     k=k+1;
}
while(j<=r)
{
     c[k]=a[j];
     j=j+1;
     k=k+1;
}
int l=p;
while(l<=r)
{
a[l]=c[l];
l=l+1;
}
}
void mergesort(int a[],int p,int r)
{
     if( p < r)
    {
         int q=(p+r)/2;
         mergesort(a,p,q);
         mergesort(a,q+1,r);
         merge(a,p,q,r);
     }
     else
        return;
}
int main()
{
    int n;
    cout<<"Enter size of the array to be sorted in increasing order:\n";
    cin>>n;
    int x[n];
    int i=0;
    cout<<"Enter elements of the array to be sorted in increasing order:\n";
    while(i<n)
    {
        cin>>x[i];
        i++;
    }
    mergesort(x,0,n-1);
    cout<<"Sorted Array:\n";
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<endl;
    }
return 0;
}
