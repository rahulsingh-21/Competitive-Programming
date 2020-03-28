

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
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            long a;
            vector <long>v;
            for(long i=0;i<n;i++)
            {
                cin>>a;
                v.push_back(a);
            }
            sort(v.begin(),v.end());
            long mini=1000000000001,s;
            for(int i=0;i<n-1;i++) 
            { 
                s=v[i]^v[i+1]; 
                mini=min(mini,s); 
            } 
            //cout<<s<<" "<<r<<endl;
            cout<<mini<<endl;
        }
    }

Language: C++14
