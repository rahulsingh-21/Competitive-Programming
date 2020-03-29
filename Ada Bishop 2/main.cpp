#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	        int a[18],b[18];
	        a[0]=7,b[0]=7;
	        a[1]=8,b[1]=6;
	        a[2]=3,b[2]=1;
	        a[3]=1,b[3]=3;
	        a[4]=5,b[4]=7;
	        a[5]=8,b[5]=4;
	        a[6]=5,b[6]=1;
	        a[7]=1,b[7]=5;
	        a[8]=4,b[8]=8;
	        a[9]=3,b[9]=7;
	        a[10]=2,b[10]=8;
	        a[11]=1,b[11]=7;
	        a[12]=7,b[12]=1;
	        a[13]=8,b[13]=2;
	        a[14]=5,b[14]=5;
	        a[15]=8,b[15]=8;
	        a[16]=7,b[16]=7;
	        a[17]=6,b[17]=8;
	    if(r==1&&c==1)
	    {
	        cout<<18<<endl;
	        cout<<7<<" "<<7<<endl;
	        cout<<8<<" "<<6<<endl;
	        cout<<3<<" "<<1<<endl;
	        cout<<1<<" "<<3<<endl;
	        cout<<5<<" "<<7<<endl;
	        cout<<8<<" "<<4<<endl;
	        cout<<5<<" "<<1<<endl;
	        cout<<1<<" "<<5<<endl;
	        cout<<4<<" "<<8<<endl;
	        cout<<3<<" "<<7<<endl;
	        cout<<2<<" "<<8<<endl;
	        cout<<1<<" "<<7<<endl;
	        cout<<7<<" "<<1<<endl;
	        cout<<8<<" "<<2<<endl;
	        cout<<5<<" "<<5<<endl;
	        cout<<8<<" "<<8<<endl;
	        cout<<7<<" "<<7<<endl;
	        cout<<6<<" "<<8<<endl;
	        //cout<<1<<" "<<1<<endl;
	    }
	    if(r!=1||c!=1)
	    {
	        int x=(r+c)/2;
	        cout<<20<<endl;
	        cout<<x<<" "<<x<<endl;
	        cout<<1<<" "<<1<<endl;
	        for(int i=0;i<18;i++)
	        {
	            cout<<a[i]<<" "<<b[i]<<endl;
	        }
	    }
	}
}
