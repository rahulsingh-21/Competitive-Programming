#include <stdio.h>
int main()
{
    int n,d=0;
    scanf("%d",&n);
    while(n--)
    {
        int x,i,j,k,c;
        scanf("%d",&x);
        int a[x],b[x];
        for(i=0;i<x;i++)
        {
          scanf("%d",&a[i]);  
        }
        for(j=0;j<x;j++)
        {
          scanf("%d",&b[j]);
        }
        for(k=0;k<x;k++)
        {
            c=(a[k]*20)-(b[k]*10);
            if(d<c)
            {
                d=c;
            }
        }
        printf("%d\n",d);
        d=0;
    }

}