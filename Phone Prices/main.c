#include <stdio.h>
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
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count=1;
        for(i=0;i<n-5;i++)
        {
            if(a[i+5]<a[i+4]&&a[i+5]<a[i+3]&&a[i+5]<a[i+2]&&a[i+5]<a[i+1]&&a[i+5]<a[i])
            {
            //printf("%d",a[i+5]);
            count++;
            }
            
        }
        if(a[1]<a[0])
        count++;
        if(a[2]<a[1]&&a[2]<a[0])
        count++;
        if(a[3]<a[2]&&a[3]<a[1]&&a[3]<a[0])
        count++;
        if(a[4]<a[3]&&a[4]<a[2]&&a[4]<a[1]&&a[4]<a[0])
        count++;
        printf("%d\n",count);   
    }
}

