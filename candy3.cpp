//ac
#include <iostream>
using namespace std;
int main()
{
    long long int t,n,a,i,s;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            s=(s+a)%n;
        }
        if(s%n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
