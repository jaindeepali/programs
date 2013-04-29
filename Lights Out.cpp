#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    bool b[3][3]={1};
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            if(a[i][j]%2!=0)
            {
                for(int k=-1;k<=1;k++)
                {
                    if(i+k>=0&&i+k<3&&j-k>=0&&j-k<3)
                        b[i+k][j-k]=!b[i+k][j-k];
                    if(i+k>=0&&i+k<3&&j+k>=0&&j+k<3)
                        b[i+k][j+k]=!b[i+k][j+k];
                    if(i+k>=0&&i+k<3)
                        b[i+k][j]=!b[i+k][j];
                    if(j+k>=0&&j+k<3)
                        b[i][j+k]=!b[i][j+k];
                }
            }
        }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<b[i][j];
        cout<<"\n";
    }
    return 0;
}
