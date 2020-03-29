#include <stdio.h>
int tri(int x)
{
    int i;
    int sum=0;
    for(i=1;i<=x;i++)
    {
        sum+=i;
        
    }
   // printf("%d\n",sum);
    return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int i;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        int j,count0=-1,count2=-1,count=0;
        for(i=1;i<=n;i++)
        {
           if(a[i]==0)
           {
               count0++;
           }
           if(a[i]==2)
           {
               count2++;
           }
        }
        int c0,c2;
        if(count2==0)
        {
            c2=0;
        }
        if(count0==0)
        {
            c0=0;
        }
        if(count2<0)
        {
            c2=0;
        }
        if(count2>0)
        {
            c2=tri(count2);
        }
        if(count0<0)
        {
            c0=0;
        }
        if(count0>0)
        {
            c0=tri(count0);
        }
        //printf("%d\n",count0);
        //printf("%d\n",count2);
        count=c0+c2;
        printf("%d\n",count);
    }
}
