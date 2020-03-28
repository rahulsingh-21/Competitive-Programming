

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
    int gcd(int a, int b) 
    { 
        // Everything divides 0  
        if (a == 0) 
           return b; 
        if (b == 0) 
           return a; 
       
        // base case 
        if (a == b) 
            return a; 
       
        // a is greater 
        if (a > b) 
            return gcd(a-b, b); 
        return gcd(a, b-a); 
    } 
    int lcm(int a, int b)  
     {  
        return (a*b)/gcd(a, b);  
     }  
    int main()
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long p,q,r,s,u,v,i,j,k,c1,d1;
        p=lcm(a,c);
        q=lcm(b,d);
        r=p*q;
        s=c*d;
        k=r/s;
        c1=k*c;
        d1=k*d;
        i=c1/a;
        j=d1/b;
        cout<<i<<" "<<j<<" "<<k;
    }

Language: C++14
