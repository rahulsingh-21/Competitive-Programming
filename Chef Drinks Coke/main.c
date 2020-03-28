#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        signed int n,m,k,l,r,c,e,d=10000000;
        scanf("%d %d %d %d %d",&n,&m,&k,&l,&r);
        int a[n],b[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        int flag=0,j;
        for(i=0;i<n;i++)
        {
            c=a[i];
            for(j=0;j<m;j++)
            {
            
            if(c>k+1)
            c=c-1;
            else if(c<k-1)
            c=c+1;
            else if(c>=k-1&&c<=k+1)
            c=k;
            }
            if(c>=l&&c<=r)
            {
               e=b[i];
                if(d>e)
                {
                d=e;
                
                
                flag=1;
                }
                
            }
        }
        if(flag==1)
        printf("%d\n",d);
        if(flag==0)
        printf("-1\n");
        
    }
}

