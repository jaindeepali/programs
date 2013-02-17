//ac
#include<iostream>
using namespace std;
unsigned long long int f(int x)
{
    if(x==1)
        return 2;
    else
        return 3*f(x-1)+2;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<f(n)<<endl;
    }
  return 0;
}
