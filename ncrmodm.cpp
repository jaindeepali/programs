#include <iostream>
using namespace std;
double c(int n,double r,int m)
{
    if(n==r||r==0)
        return 1;
    return (int)((((int)((n%m)*(1/r)))%m)*c(n-1,r-1,m))%m;
}
int main()
{
    int n,m;
    double r;
    cin>>n>>r>>m;
    int x=c(n,r,m);
    while(x<0)
    {
        x=x+m;
    }
    cout<<x;
    return 0;
}
