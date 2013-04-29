//ac
#include<iostream>
#include<cstdio>
#include <string>
using namespace std;
int main()
{
    int t,x=0;
    string s;
    scanf("%d", &t);
    while(t--)
    {
        cin>>s;
        if(s.find("++")!=string::npos)
            x++;
        else
            x--;
    }
    printf("%d", x);
return 0;
}
