//ac
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    while(1)
    {
        cin>>a>>b;
        if(a==-1&b==-1)
            break;
        c=max(a,b);
        d=min(a,b);
        if(c%(d+1)==0)
            cout<<c/(d+1)<<endl;
        else
            cout<<(c/(d+1))+1<<endl;
    }
return 0;
}
