//ac
#include<iostream>
using namespace std;
unsigned long long int f(int x,int y)
{
    if(x==y||y==0)
    	return 1;
    if(y==1||y==x-1)
    	return x;
    return x*f(x-1,min(y-1,x-y))/y;
}
int main()
{
    int t,n,k;
    unsigned long long int o;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        o=f(n-1,n-k);
        cout<<o<<endl;
    }
    return 0;
}



