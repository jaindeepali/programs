#include<iostream>
using namespace std;
int f(int n)
{
    int c=0;
    for(int i=n+1;i<=2*n;i++)
    {
        if((n*i)%(i-n)==0)
            c++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
