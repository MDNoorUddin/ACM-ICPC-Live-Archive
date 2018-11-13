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
    cin >> t;
    int n;
    while(t--)
    {
        cin >> n;
        int mn=0;
        for(int i=n-1,j=1;i>=0&&j<=50;i--,j++)
        {
            int sum=i;
            int g=i;
            while(g)
            {
                sum+=g%10;
                g/=10;
            }
            //cout<<i<< " "<<sum<<endl;
            if(sum==n)
                mn=i;
        }
        cout<<mn<<endl;
    }
}
