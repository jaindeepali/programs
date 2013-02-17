//wa
#include<iostream>
using namespace std;
int f(int x)
{
    if(x==4||x==3)
        return 3;
    return f((x+1)/2+1)+1;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<f(n)<<endl;
    }
  return 0;
}
