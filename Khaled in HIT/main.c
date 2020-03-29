/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int u[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&u[i]);
        }
        int x,y,z;
        x=n/4;
        y=n/2;
        z=x+y;
        int j,temp;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(u[i]>u[j])
                {
                temp=u[i];
                u[i]=u[j];
                u[j]=temp;
                }
            }
        }
        
        int a=100000000,b=100000000,c=1000000000,d=0,a1=0,b1=0,c1=0;
         for(i=x;i<y;i++)
        {
            if(u[i]>a1)
            a1=u[i];
        }
        for(i=y;i<z;i++)
        {
            if(u[i]>b1)
            b1=u[i];
        }
        for(i=z;i<n;i++)
        {
            if(u[i]>c1)
            c1=u[i];
        }
        for(i=0;i<x;i++)
        {
            if(u[i]>d)
            d=u[i];
        }
        for(i=x;i<y;i++)
        {
            if(u[i]<a)
            a=u[i];
        }
        for(i=y;i<z;i++)
        {
            if(u[i]<b)
            b=u[i];
        }
        for(i=z;i<n;i++)
        {
            if(u[i]<c)
            c=u[i];
        }
        
        if(a1==b||b1==c||d==a)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d %d %d\n",a,b,c);
        }
    }
}
