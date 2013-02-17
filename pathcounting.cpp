#include<iostream>
using namespace std;
int path(int a,int b)
{
    if(a==0||b==0)
        return 1;
    return path(a,b-1)+path(a-1,b);
}
int pathfunc(int a,int b,int m,int n)
{
    int c=0;
    for(int i=0;i>=b-m;i++)
        c=c+path(n,b-m-i)*path(a-n,m+i);
    return c;
}
int main()
{
    int a,b,m,n;
    cin>>a>>b>>m>>n;
    cout<<pathfunc(a,b,m,n);
  return 0;
}
