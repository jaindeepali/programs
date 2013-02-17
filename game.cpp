#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c=0;
    cin>>n;
    int h[n],a[n];
    for(i=0;i<n;i++)
    {
        cin>>h[i]>>a[i];
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(h[j]==a[i])
                c++;
        }
    }
    cout<<c<<endl;
  return 0;
}
