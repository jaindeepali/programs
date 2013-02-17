#include<iostream>
using namespace std;
int main()
{
    double s[31][31];
     for(int i=0;i<31;i++)
    {
        s[i][0]=1;
        s[i][1]=i;
        s[i][i]=1;
    }
    for(int i=3;i<31;i++)
    {
        for(int j=2;j<i;j++)
        {
            s[i][j]=i*(s[i-1][min(i-j,j-1)]/j);
        }
    }
    int t,g,b,n,j;
    unsigned long long int o;
    cin>>n;
    while(n--)
    {   o=0;
        cin>>b>>g>>t;
        if(t>b)
            j=t-b;
        else
            j=1;
        for(;j<=t-4;j++)
        {
            o=o+s[g][min(j,g-j)]*s[b][min(t-j,b-t+j)];
        }
        cout<<o<<endl;
    }
cin.ignore();
cin.get();
return 0;
}
