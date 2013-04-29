//ac
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int i,n,j,t,k;
    string s,o;
    scanf("%d", &n);
    while(n!=0)
    {
        cin>>s;
        t=s.length();
        k=0;
        for(i=0;i<n;i++)
        {
            o[k]=s[i];
            cout<<o[k];
            k++;
            for(j=i+2*n;j<t+n;j=j+2*n)
            {
                o[k]=s[j-2*i-1];
                cout<<o[k];
                if(j<t)
                {
                    o[k+1]=s[j];
                    cout<<o[k+1];
                }
                k=k+2;
            }
        }
        cout<<endl;
        scanf("%d", &n);
    }

    return 0;
}
