//working fine
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string toString(int a)
{
    string s="";
    while(a)
    {
        s=(char)(a%10+'0')+s;
        a/=10;
    }
    return s;
}
int toInt(string s)
{
    int a=0;
    for(int i=0;i<s.length();i++)
    {
        a=a*10+s[i]-'0';
    }
    return a;
}
int main()
{
    string nbig,tmpstr;
    int a,tmpnum;
    cin>>nbig>>a;
    while(!nbig.empty())
    {
        if(nbig.length()>9)
        {
            tmpstr=nbig.substr(0,9);
            nbig=nbig.substr(9);
        }
        else
        {
            tmpstr=nbig;
            nbig="";
        }
        tmpnum=toInt(tmpstr);
        tmpnum=tmpnum%a;
        tmpstr=toString(tmpnum);
        nbig=tmpstr+nbig;
        if(nbig.length()<=toString(a).length())
        {
            if(toInt(nbig)<a)
                break;
        }
    }
    cout<<nbig;
    return 0;
}
