#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        int max1=0,max2=0,max3=0,max4=0,max5=0,max6=0,max7=0,max8=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                if(max1<b[i])
                {
                    max1=b[i];
                }
            }
            if(a[i]==2)
            {
                if(max2<b[i])
                {
                    max2=b[i];
                }
            }
            if(a[i]==3)
            {
                if(max3<b[i])
                {
                    max3=b[i];
                }
            }
            if(a[i]==4)
            {
                if(max4<b[i])
                {
                    max4=b[i];
                }
            }
            if(a[i]==5)
            {
                if(max5<b[i])
                {
                    max5=b[i];
                }
            }
            if(a[i]==6)
            {
                if(max6<b[i])
                {
                    max6=b[i];
                }
            }
            if(a[i]==7)
            {
                if(max7<b[i])
                {
                    max7=b[i];
                }
            }
            if(a[i]==8)
            {
                if(max8<b[i])
                {
                    max8=b[i];
                }
            }
        }
        int sum=0;
        sum=max1+max2+max3+max4+max5+max6+max7+max8;
        printf("%d\n",sum);
    }
}
