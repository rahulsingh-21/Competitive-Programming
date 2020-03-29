#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long a[n];
        long long b;
        int i,count1=0,r,count=0,countr=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            
        }
        for(i=0;i<n;i++)
        {
            b=a[i];
            //printf("%d\n",b);
            countr=0;
           while(b!=0)
        {
            r=b%10;
            //printf("%d\n",count);
            if(countr==0)
            {
               if(r==1) 
               count1++;
             
            }
            if(countr==1)
            {
               if(r==1)
               count2++;
                
            }
            if(countr==2)
            {
               if(r==1) 
               count3++;
                
            }
            if(countr==3)
            {
              if(r==1)
               count4++;
               
            }
            if(countr==4)
            {
               if(r==1)
               count5++;
                
            }
            if(countr==5)
            {
               if(r==1)
               count6++;
                
            }
            if(countr==6)
            {
               if(r==1)
               count7++;
                
            }
            if(countr==7)
            {
               if(r==1)
               count8++;
                
            }
            if(countr==8)
            {
               if(r==1)
               count9++;
                
            }
            if(countr==9)
            {
              if(r==1)
               count10++;
               
            }
            countr++;
            b/=10;
            
        }
        }
        
           
        if(count1%2!=0)
        count++;
        if(count2%2!=0)
        count++;
        if(count3%2!=0)
        count++;
        if(count4%2!=0)
        count++;
        if(count5%2!=0)
        count++;
        if(count6%2!=0)
        count++;
        if(count7%2!=0)
        count++;
        if(count8%2!=0)
        count++;
        if(count9%2!=0)
        count++;
        if(count10%2!=0)
        count++;
        
        printf("%d\n",count);
    }
}
