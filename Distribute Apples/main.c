#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long x,y,c;
        int d;
        scanf("%ld",&x);
        scanf("%ld",&y);
        //c=pow(y,2);
        //if(x==y&&x>1)
          //  {
            //    printf("YES\n");
                
            //}
        if(x%y==0)              
        {
            c=x/y;
            d=c%y;
            
            if(d>0)
            printf("YES\n");
            else
            printf("NO\n");
            
            
            
            
           /* if(x%c==0)
            {
                printf("NO\n");
            }
            else 
            printf("YES\n");*/
            
            
        }
        
    }
}

