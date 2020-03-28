#include <stdio.h>
#include <string.h>
#define MAX 100000
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char arr[MAX];
        int i=0,j,k,count=0;
        scanf("%s",arr);
        int len=strlen(arr);
      //  printf(",length %d",len);
        
       /* for(i=0;i<len;i++)
        {
            arr[i]=S%10;
            S=S/10;
           // printf("%d",arr[i]);
        } */
      
        //int jf=sizeof(arr);
        //printf("%d",jf);
        for(i=0;i<len;i++)
        {
            int flag=0;
          for(j=0;j<len;j++)
           {
             if(arr[j]=='1')
              {
                flag=1;
                arr[j]='x';
                if(j==0)
                {
                  if(arr[j+1]=='0')
                      arr[j+1]='1';
                   else if(arr[j+1]=='1')
                      arr[j+1]='0';
                }
                else if(j==len-1)
                {
                  if(arr[j-1]=='0')
                       arr[j-1]='1';
                  else if(arr[j-1]=='1')
                    arr[j-1]='0';
                }
                else
                {
                  if(arr[j-1]=='0')
                     arr[j-1]='1'; 
                    else if(arr[j-1]=='1')
                   arr[j-1]='0'; 
                  if(arr[j+1]=='0')
                     arr[j+1]='1'; 
                 else if(arr[j+1]=='1')
                      arr[j+1]='0';
                }
            }
        }
        if(flag==0)
        break;
        }
        for(k=0;k<len;k++)
        {
            if(arr[k]=='x')
            //printf("%d",arr[k]);
                count=count+1;
        }
        //count1=count1;
        //printf("%d",count1);
        //printf("%d",len);
        if(count==len)
        printf("WIN\n");
        else
        printf("LOSE\n");
    }   
}

