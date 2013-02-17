//ac
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    string a;
    unsigned long long int b;
    int t,x,k;
    scanf("%d", &t);
    while(t--)
    {
        cin>>a>>b;
        if(b==0)
            printf("1\n");
        else
        {
            x=a.length();
            k=a[x-1]-'0';
            x=b%4;
            if(x==0)
                x=4;
            x=pow(k,(double)x);
            printf("%d\n", x%10);
        }
    }
    return 0;
}
