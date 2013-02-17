//ac
#include <iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
int t,n,k,i,a,s;
cin>>t;
while(t--)
{
    s=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s=s+a/k;
    }
    cout<<s<<endl;
}
return 0;
}
