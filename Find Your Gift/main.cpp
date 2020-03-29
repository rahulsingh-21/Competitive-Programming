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
        long n;
        cin>>n;
        char s[n];
        cin>>s;
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L'&&s[i-1]!='L'&&s[i-1]!='R')
            x=x-1;
            if(s[i]=='R'&&s[i-1]!='R'&&s[i-1]!='L')
            x=x+1;
            if(s[i]=='U'&&s[i-1]!='U'&&s[i-1]!='D')
            y=y+1;
            if(s[i]=='D'&&s[i-1]!='D'&&s[i-1]!='U')
            y=y-1;
        }
        cout<<x<<" "<<y<<endl;
    }
}