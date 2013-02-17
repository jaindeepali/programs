#include <iostream>
//ac
#include <cstdio>
using namespace std;
int main()
{
    int i,c,t,m;
    string s;
    scanf("%d", &t);
    while(t--)
    {
        c=0;
        cin>>s;
        m=s.length();
        for(i=1;i<m;i++)
        {
            if(s[i]!=s[i-1])
                c++;
        }
        if(s[0]=='0')
            printf("%d\n", c);
        else
            printf("%d\n", c+1);
    }
    return 0;
}
