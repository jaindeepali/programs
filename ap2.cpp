//ac
#include<iostream>
using namespace std;
int main()
{
	int t,n,d,i;
	long long int x,y,s,a;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>s;
		n=(2*s)/(x+y);
		d=(y-x)/(n-5);
		a=x-2*d;
		cout<<n<<endl;
		for(i=0;i<n;i++)
		{
		    cout<<a+i*d<<" ";
		}
		cout<<endl;
	}
	return 0;
}
