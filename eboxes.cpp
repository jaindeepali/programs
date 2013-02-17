//ac
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int tn,n,k,t,f,x;
    cin>>tn;
    while(tn--)
    {
        cin>>n>>k>>t>>f;
        x=(f-n)/(k-1);
        cout<<n+k*x<<endl;
    }
return 0;
}
