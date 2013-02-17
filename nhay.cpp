#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int n,c,j,s;
    string hstck,needle;
    scanf("%d", &n);
    while(n)
    {
        scanf("%s", &needle);
        scanf("%s", &hstck);
        s=hstck.length();
        c=0;
        for(j=0;j<=s-n;j++)
        {
            if(hstck.substr(j,n)==needle)
            {
                printf("%d\n", j);
                c++;
            }
        }
        if(c==0)
            printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
