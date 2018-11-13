#include<bits/stdc++.h>

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<iterator>
#include<algorithm>
#include<string>
#include<bitset>
using namespace std;

int g(int i)
{
    int sum=0;
    while(i)
    {
        sum+=(pow(i%10,2));
        i/=10;
    }
    return sum;
}
int main()
{
    int t;
    while(cin>>t)
    {
        int c=0,a;
        for(int i=1;i<=5;i++)
        {
            cin >> a;
            if(a==t)c++;
        }
        cout << c << endl;
    }
}
