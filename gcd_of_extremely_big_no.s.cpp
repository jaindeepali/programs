//runtime error
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
string mod(string nbig,string x)
{
    string tmpstr;
    int tmpnum,a=toInt(x);
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
    return nbig;
}
string gcd(string a,string b)
{
    if(toInt(mod(a,b))==0)
        return b;
    return gcd(mod(a,b),b);
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
return 0;
}
