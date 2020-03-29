#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        long c,sum=0;
        int d;
        c=a+b;
        while(c>0)
        {
            d=c%10;
            if(d==0||d==6||d==9)
            {
                sum+=6;
            }
            else if(d==2||d==3||d==5)
            {
                sum+=5;
            }
            else if(d==1)
            {
                sum+=2;
            }
            else if(d==4)
            {
                sum+=4;
            }
            else if(d==7)
            {
                sum+=3;
            }
            else if(d==8)
            {
                sum+=7;
            }
            c=c/10;
        }
        printf("%ld\n",sum);
    }
}
