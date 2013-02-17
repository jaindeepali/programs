int inverse(int a,int b)
{
    int i=0,z;
    int* a1=new int;
    while(b!=0)
    {
        z=a;
        a1[i]=a/b;
        a=b;
        b=z%b;
        i++;
    }
    int x[i],y[i];
    x[i-1]=0;y[i-1]=1;
    for(int j=i-2;j>=0;j--)
    {
        x[j]=y[j+1];
        y[j]=x[j+1]-a1[j]*x[j];
    }
    return x[0];
}
