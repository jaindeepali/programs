//ac
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    unsigned long long int n,r;
    char sp,d;
    while(t--)
    {
            scanf("%lld", &n);
            if((n-1)%5==0)
                r=(n-1)/5;
            else
                r=((n-1)/5)+1;
            switch(n%10)//considering unit digit of seat no.
                {
                    case 2:
                    case 1:
                        sp='W';
                        d='L';
                        break;
                    case 3:
                    case 0:
                        sp='A';
                        d='L';
                        break;
                    case 4:
                    case 9:
                        sp='A';
                        d='R';
                        break;
                    case 5:
                    case 8:
                        sp='M';
                        d='R';
                        break;
                    case 6:
                    case 7:
                        sp='W';
                        d='R';
                        break;
                }
            if(n==1)
                printf("poor conductor\n");
            else
                printf("%lld %c %c\n", r,sp,d);
        }
    cin.ignore();
    cin.get();
    return 0;
}
