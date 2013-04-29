//wa
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,t[10],s=0,a,b;
    for(i=0;i<10;i++)
    {
        scanf("%d", &t[i]);
    }
    for(i=0;i<10;i++)
    {
        s=s+t[i];
        if(s>100)
        {
            break;
        }
    }
    a=s-100;
    b=100-s+t[i];
    if(a>b)
        printf("%d",s-t[i]);
    else
        printf("%d",s);
  return 0;
}
