#include <stdio.h>
void merge(long long int A[ ] , long long int start, long long int mid, long long int end)
{
    long long int p = start ,q = mid+1, i;
    long long int Arr[end-start+1] , k=0;
    for(i = start ;i <= end ;i++)
    {
        if(p > mid)
           Arr[ k++ ] = A[ q++] ;
        else if ( q > end)
           Arr[ k++ ] = A[ p++ ];
        else if( A[ p ] < A[ q ])
           Arr[ k++ ] = A[ p++ ];
        else
           Arr[ k++ ] = A[ q++];
    }
    for (p=0 ; p< k ;p ++)
    {
        A[ start++ ] = Arr[ p ] ;
    }
}
void merge_sort(long long int a[], long long int low, long long int high)
{
    long long int mid;
    if (low < high)
    {
        mid = (low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long a[n],b[n],i,j,temp;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
        }
        merge_sort(a,0,n-1);
        merge_sort(b,0,n-1);
        long long x=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=b[i])
            x+=b[i];
            if(a[i]<b[i])
            x+=a[i];
        }
        printf("%lld\n",x);
    }
}
