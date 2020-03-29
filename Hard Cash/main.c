#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        long long a[n],i,sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        long long x,y,z;
        x=sum/k;
        y=x*k;
        z=sum-y;
        printf("%d\n",z);
    }
}

