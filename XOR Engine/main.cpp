#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        vector<int>a;
        vector<int>q;
        int A;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A);
            a.push_back(A);
        }
        for(int i=0;i<k;i++)
        {
            scanf("%d",&A);
            q.push_back(A);
        }
        int x,y,z,countodd=0,counteven=0,u[k],v[k];
        for(int j=0;j<n;j++)
            {
                y=a[j];
                int count=0,num; 
                while(y) 
                { 
                y&=(y-1); 
                count++; 
                } 
                if(count%2!=0)
                countodd++;
                if(count%2==0)
                counteven++;                    
            }
        for(int i=0;i<k;i++)
        {
            y=q[i];
            int count=0,num; 
            while(y) 
            { 
            y&=(y-1); 
            count++; 
            } 
            if(count%2!=0)
            printf("%d %d\n",countodd,counteven);
            if(count%2==0)
            printf("%d %d\n",counteven,countodd);
        }
    }
}
