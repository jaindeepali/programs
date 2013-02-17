#include<iostream>
#include<cstdio>
using namespace std;
int s[10001];
int f(int x)
{
    if(x<10001)
        return s[x];
    else if(x%2==0)
        return f(x/2);
    else
        return f((x-1)/2)+1;
}
int main()
{
    s[0]=0;
    for(int i=1;i<10001;i++)
    {
        if(i%2==0)
            s[i]=s[i/2];
        else
            s[i]=s[(i-1)/2]+1;
    }
    int i,j,n,c=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(f(ar[i])==f(ar[j]))
                c++;
        }
    }
    cout<<c;
return 0;
}
