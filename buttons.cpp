#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n,f;
    cin>>n;
    f=n+((n*(n+1)*(n-1))/6);
    cout<<f;
  return 0;
}
