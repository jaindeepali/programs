//ac
#include<iostream>
using namespace std;
int main()
{
    long long int x,m,n;
    cin>>m>>n;
    x=min(m,n);
    cout<<x+1<<endl;
    for(int i=0;i<=x;i++)
    {
        cout<<i<<" "<<x-i<<endl;
    }
  return 0;
}
