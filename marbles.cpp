//runtime sigsegv
#include<iostream>
using namespace std;
double s[101][101];//cant make an array of 10^6 elements...therefore calc. till 1000 by dp and rest by recursion.
double f(int x,int y)
{
    if(x<101)
        return s[x][min(y,x-y)];
    else
        return (x/y)*f(x-1,min(y-1,x-y));
}
int main()
{
     for(int i=0;i<101;i++)
    {
        s[i][0]=1;
        s[i][1]=i;
        s[i][i]=1;
    }
    for(int i=3;i<101;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
            s[i][j]=(i/j)*s[i-1][min(i-j,j-1)];
        }
    }
    int t,n,k;
    unsigned long long int o;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        o=f(n-1,min(n-k,k-1));
        cout<<o<<endl;
    }
    return 0;
}
