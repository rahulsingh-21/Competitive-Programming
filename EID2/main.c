#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int A1,A2,A3,C1,C2,C3;
        scanf("%d %d %d %d %d %d",&A1,&A2,&A3,&C1,&C2,&C3);
        //int a1[2];
        //int a2[2];
        //int a3[2];
        int a[6];
        int i;
        a[0]=A1;
        a[1]=A2;
        a[2]=A3;
        a[3]=C1;
        a[4]=C2;
        a[5]=C3;
        //int a[3],max=0;
        //a[0]=a1[0];
        //a[1]=a2[0];
        //a[2]=a3[0];
        int x,max=0,min=100000000,y,z;
        for(i=0;i<=2;i++)
        {
            if(a[i]>max)
            {
            max=a[i];
            x=i;
            
            }
            
            
            
        }
        if(a[0]==a[1]&&a[1]==a[2])
        {
            x=2;
        }
        for(i=0;i<=2;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
                z=i;
            }
        }
        if(a[0]==a[1]&&a[1]==a[2])
        {
            z=0;
        }
        for(i=0;i<=2;i++)
        {
            if(i!=x&&i!=z)
            {
                y=i;
            }
        }
       //printf("%d\n",x);
    //    printf("%d\n",y);
       // printf("%d\n",z);
        if(a[x]!=a[y]&&a[y]!=a[z])
        {
            if((a[x+3]>a[y+3])&&(a[y+3]>a[z+3]))
            printf("FAIR\n");
            else
            printf("NOT FAIR\n");
        }
        else if(a[x]==a[y]&&a[y]!=a[z])
        {
            if((a[x+3]==a[y+3])&&(a[y+3]>a[z+3]))
            printf("FAIR\n");
            else
            printf("NOT FAIR\n");
        }
        else if(a[x]==a[y]&&a[y]==a[z])
        {
            if((a[x+3]==a[y+3])&&(a[y+3]==a[z+3]))
            printf("FAIR\n");
            else
            printf("NOT FAIR\n");
        }
        else if(a[x]>a[y]&&a[y]==a[z])
        {
            if((a[x+3]>a[y+3])&&(a[y+3]==a[z+3]))
            printf("FAIR\n");
            else
            printf("NOT FAIR\n");
        }
        
        x=0;
        y=0;
        z=0;
    }
}
