//ac
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unsigned long long int sum=0;
    for(int i=0;i<s.length();i++)
    {
        sum=sum+s[i]-48;
    }
return 0;
}
