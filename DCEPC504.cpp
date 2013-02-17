//ac
#include<iostream>
using namespace std;
bool f(int n,unsigned long long int k)
{
    if(n==1||k==1)
        return 0;
    if(k%2==0)
        return !f(n-1,k/2);
    else
        return f(n-1,(k+1)/2);
}
int main()
{
    int t,n;
    unsigned long long int k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(f(n,k)==0)
            cout<<"Male"<<endl;
        else if(f(n,k)==1)
            cout<<"Female"<<endl;
    }
return 0;
}

