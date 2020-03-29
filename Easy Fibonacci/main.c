#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long t;
        scanf("%lld",&t);
        long long  a[60],i,a1=0,sum=0,b=1;
        a[0]=a1;
        a[1]=b;
        for(i=2;i<60;i++)
        {
            
            sum=(a1+b)%10;
            a1=b;
            b=sum;
            a[i]=sum;
            
        }
        long long n,m,p;
        for(i=0;i<60;i++)
        {
            n=pow(2,i);
            m=pow(2,i+1);
            if(t<m&&t>=n)
            {
                p=n;
                break;
            }
        }
        if(p<=60)
            {
            printf("%d\n",a[p-1]);
            }
        else if(p>60)
            {
                int x=p%60;
                printf("%d\n",a[x-1]);
            }
        
    }
}

