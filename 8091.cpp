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
    long long int x;
    while(cin>>x)
    {
        int h=x;
        while(true)
        {
            //cout<<h<<endl;
            h=g(h);
            if(h==1)
            {
                cout<<"HAPPY\n";break;
            }
            if(h==x||h==4)
            {
                cout << "UNHAPPY\n";break;
            }
        }
    }
}
