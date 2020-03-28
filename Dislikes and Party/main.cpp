

    /*
    // Sample code to perform I/O:
     
    cin >> name;                            // Reading input from STDIN
    cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
     
    // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
    */
     
    // Write your code here
    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <set>
    #include <algorithm>
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long x;
        cin>>x;
        long a[10][10];
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>a[i][j];
            }
        }
         long n,m,count=0;
         long x1=a[0][0];
         long x2=a[0][1];
         v1.push_back(x1);
         v2.push_back(x2);
         v1.push_back(x2);
         v2.push_back(x1);
        for(long i=0;i<10;i++)
        {
            n=a[i][0];
            //y[i]=n;
            //v[n].push_back(n);
            for(long j=0;j<10;j++)
            {
                
                m=a[i][j];
                int s1=v1.size();
                int flag=0;
                for(int k=0;k<s1;k++)
                {
                    if(n==v1[k]&&m==v2[k])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    v1.push_back(n);
                    v2.push_back(m);
                    if(n!=m)
                    {
                    v1.push_back(m);
                    v2.push_back(n);
                    }
                }
            }
            //cout<<endl;
        }
        int nn=v1.size();
        // for(int i=0;i<nn;i++)
        // {
        //     cout<<v1[i]<<" "<<v2[i]<<endl;
        //     if(v1[i]==6&&v2[i]==6)
        //     //cout<<" dddddddd";
        // }
        long ln=x-10;
        nn=nn+ln;
        long long n2=x*x;
        long nx=n2-nn;
        //cout<<nn<<endl;
        long y =nx/2;
        cout<<y;
    }

Language: C++14
