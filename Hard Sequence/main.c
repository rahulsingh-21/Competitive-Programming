#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,a[n],x,j,flag=0,k;
        a[0]=0;
        for(x=0;x<n;x++)
        {
            flag=0;
            for(i=x-1;i>=0;i--) 
            
                {
                    if(a[i]==a[x])
                    {
                    a[x+1]=x-i;
                    flag=1;
                     break;
                    }
                    
                }
                if(flag==0)
                {
                a[x+1]=0;
                }
                //printf("%d\n",a[x]);
        }
        int q=a[n-1],count=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==q)
            count++;
        }
        printf("%d\n",count);
    }
}