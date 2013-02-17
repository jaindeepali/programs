//tle
#include <iostream>
#include<cstdio>
using namespace std;
int numdiv(int num)
{
    int res=1,c,i;
    for (i=2; i <= num; i++)
{
    c=0;
 while(num % i == 0)
 {
   num /= i;
   c++;
 }
   res=res*(c+1);
   if(num==1)
    break;
}
return res;
}
int main()
{
    int n,sum=0;
    scanf("%d", &n);
    for(int i=2;i<=n;i++)
    {
        sum=sum+(numdiv(i)+numdiv(i)%2)/2;
    }
    printf("%d", sum+1);
cin.ignore();
cin.get();
return 0;
}
