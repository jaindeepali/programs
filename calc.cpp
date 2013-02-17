#include<iostream>
#include<cmath>
using namespace std;
string str(int);
string div(string,string);
string add(string,string);
string sub(string,string);
string div(string s1,string s2)
{
    string result;
    int c=0;
while(result>=s2)
{
    result=sub(result,s2);
    c++;
}
return str(c);
}
string str(int n)
{
    string result="";
    while(n!=0)
    {
        result=(char)(n%10)+result;
        n/=10;
    }
}
string sub(string s1, string s2)
{
    string result;
    if(s1==s2)
    {
        result="0";
        return result;
    }
    int n1=s1.length();
    int n2=s2.length();
    char comp[n2];
    for(int i=0;i<n2;i++)
    {
        comp[i]='9'-s2[i]+48;
    }
    result=add(comp,s1);
    int n=result.length();
    if(n>n1&&n>n2)
    {
        result[n-1]=result[n-1]+result[0]+48;
        result[0]='0';
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            result[i]='9'-result[i]+48;
        }
        result='-'+result;
    }
    return result;
}

string add(string s1, string s2)
{
int carry=0,sum,i;
string  min=s1,
 max=s2,
 result = "";

// Finds the bigger string
if (s1.length()>s2.length()){
 max = s1;
 min = s2;
} else {
 max = s2;
 min = s1;
}

// Fills the result for overlapping regions of sum
for (i = min.length()-1; i>=0; i--){
 sum = min[i] + max[i + max.length() - min.length()] + carry - 2*'0';

 carry = sum/10;
 sum %=10;

 result = (char)(sum + '0') + result;
}

// Summates the previous carry and the remaining digits of bigger string
i = max.length() - min.length()-1;

while (i>=0){
 sum = max[i] + carry - '0';
 carry = sum/10;
 sum%=10;

 result = (char)(sum + '0') + result;
 i--;
}

// Adds the carry if remaining to the last digit e.g 999+1=1000
if (carry!=0){
 result = (char)(carry + '0') + result;
}

return result;
}
string mul(string,string);
string mul(string s1,string s2)
{
    if(s1=="0"||s2=="0")
        return "0";
    string res[s1.length()],result="";
    int i,j,carry=0,mul;
    for(i=s1.length()-1;i>=0;i--)
    {
        res[i]="";
        carry=0;
        for(j=s2.length()-1;j>=0;j--)
        {
            mul=(s1[i]-'0')*(s2[j]-'0')+carry;
            carry=mul/10;
            mul=mul%10;
            res[i]=(char)(mul+'0')+res[i];
        }
        if(carry!=0)
        {
            res[i]=(char)(carry+'0')+res[i];
        }
        for(j=0;j<s1.length()-1-i;j++)
        {
            res[i]=res[i]+'0';
        }
        result=add(res[i],result);
    }
    return result;
}

string c(string,string);
string c(string x,string y)
{
    if(y=="0"||y==x)
        return "1";
    if(y=="1")
        return x;
    else
        return mul((div(x,y)),c(sub(x,"1"),sub(y,"1")));
}
int main()
{
    cout<<sub("2","1");
return 0;
}
