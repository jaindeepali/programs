#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,j,n,totient[10001]],i,t;
    unsigned long long int tot[10001;
    bool sieve[10001]= {false};
    for (n=4;n<=10000;n=n+2)
    {
        sieve[n]=true;
    }
    for(n=3;n<100;n=n+2)
    {
        if(!sieve[n])
        {
            for(m=n*n;m<=10000;m=m+(2*n))
            {
                sieve[m]=true;
            }
        }
    }
    tot[1]=1;
    for(n=2;n<=10000;n++)
    {

        if(sieve[n])
        {
            totient[n]=n;
            for (i=2; i <= n; i++)
                {
                    if(!sieve[i]&&n%i==0)
                        totient[n]=(totient[n]*(i-1))/i;
                }
        }
        else
            totient[n]=n-1;
    tot[n]=tot[n-1]+totient[n];
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<tot[n]*tot[n]<<endl;
    }
return 0;
}
