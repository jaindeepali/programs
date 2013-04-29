//ac
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n;
    unsigned long long int k,d,x,i;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%lld", &k);
        d=floor(log(k+1)/log(2));
        //cout<<"d="<<d<<"\n";
        int o[d];
        x=k+1-pow(2.0,d);
        i=1;
        do
       {
           o[d-i]=5+(x%2);
           //cout<<o[d-i];
           x=x/2;
           i++;
       }while(x>=2);
       if(i<=d)
       {
           o[d-i]=5+x;
           //cout<<o[d-i];
           i++;
       }
       for(;i<=d;i++)
       {
           o[d-i]=5;
           //cout<<o[d-i];
       }
       //cout<<"\n";
       for(i=0;i<d;i++)
           cout<<o[i];
       cout<<"\n";
    }
return 0;
}
