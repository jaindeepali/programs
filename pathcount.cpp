#include<iostream>
using namespace std;
int s[51][51]={0};
int main()
{
    int i,j;
    for(i=0;i<=50;i++)
    {
        s[i][0]=1;
        s[0][i]=1;
    }
    for(i=1;i<=50;i++)
   {
       for(j=1;j<=50;j++)
       {
           s[i][j]=s[i-1][j-1]+s[i][j-1]+s[i-1][j];
       }
   }
    int t,a,b;
    cin>>t;
    int o[t];
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==0||b==0)
            o[i]=1;
        else if(s[a][b]>=1000000007)
            o[i]=s[a][b]%1000000007;
        else
            o[i]=s[a][b];
    }
    for(int i=0;i<t;i++)
    {
        cout<<o[i]<<endl;
    }
    return 0;
}
