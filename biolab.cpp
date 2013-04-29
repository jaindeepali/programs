#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
struct point{
    int x,y;
    double a;
};
void quickSort(point x[],int first,int last){
    int j,i;
    int pivot;
    point temp;
     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i].a<=x[pivot].a&&i<last)
                 i++;
             while(x[j].a>x[pivot].a)
                 j--;
             if(i<j){
                 temp.x=x[i].x;
                 temp.y=x[i].y;
                 temp.a=x[i].a;
                 x[i].x=x[j].x;
                 x[i].y=x[j].y;
                 x[i].a=x[j].a;
                  x[j].x=temp.x;
                  x[j].y=temp.y;
                  x[j].a=temp.a;
             }
         }

         temp.x=x[pivot].x;
         temp.y=x[pivot].y;
         temp.a=x[pivot].a;
         x[pivot].x=x[j].x;
         x[pivot].y=x[j].y;
         x[pivot].a=x[j].a;
         x[j].x=temp.x;
         x[j].y=temp.y;
         x[j].a=temp.a;
         quickSort(x,first,j-1);
         quickSort(x,j+1,last);

    }
}
int main()
{
    int t,i,n,j;
    point p[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>p[0].x>>p[0].y;
        p[0].a=0;
        for(j=1;j<n;j++)
        {
            cin>>p[j].x>>p[j].y;
            p[j].a=(p[j].y-p[0].y)/(p[j].x-p[0].x);
        }
        quickSort(p,0,n-1);
        for(j=0;j<n;j++)
        {
            cout<<p[j].x<<" "<<p[j].y<<" ";
        }
        double area=0;
        for(i=0;i<n-1;i++)
        {
            area=area+((p[i].x*p[i+1].y)-(p[i].y*p[i+1].x));
        }
        area=area+((p[n-1].x*p[0].y)-(p[n-1].y*p[0].x));
        cout<<area<<"\n";
    }
}
