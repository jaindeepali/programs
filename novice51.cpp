//ac
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,c;
    scanf("%d", &t);
    while(t--)
    {
        c=0;
        scanf("%d", &n);
        while(n)
        {
            c++;
            if(n%2==0)
                n=n/2;
            else
                n=n-1;
        }
        if(c%2==0)
            printf("Akash\n");
        else
            printf("Aayush\n");
    }
    return 0;
}
