#include<iostream>
using namespace std;
int modecount(int a[],int n)
{
    int mode=a[0],modecount=0,curr_el=a[0],curr_el_count=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>curr_el)
        {
            mode=curr_el;
            modecount=curr_el_count;
        }
    }
}
