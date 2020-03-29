#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int>a;
	    vector<int>b;
	    int A,sum=0,min=1000000000,flag=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>A;
	        a.push_back(A);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>A;
	        b.push_back(A);
	    }
	    for(int i=1;i<=k;i++)
	    {
	        sum=0;
	        flag=0;
	        for(int j=0;j<n;j++)
	        {
	            if(a[j]==i)
	            {
	                sum+=b[j];
	                flag=1;
	            }
	            
	        }
	        if(sum<min&&flag==1)
	            {
	               min=sum;
	            }
	        //cout<<sum<<min<<endl;
	    }
	    cout<<min<<endl;
	}
}
