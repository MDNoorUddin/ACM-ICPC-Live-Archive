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
    int a,b;
    string str;
    int I=1;
    while(cin>>a>>str>>b)
    {
        if(str=="E")break;
        if(str==">=")
        {
            if(a>=b)
            {
                printf("Case %d: true\n",I++);
            }
            else
            {
                printf("Case %d: false\n",I++);
            }
        }

        if(str==">")
        {
            if(a>b)
            {
                printf("Case %d: true\n",I++);
            }
            else
            {
                printf("Case %d: false\n",I++);
            }
        }

        if(str.length()==2&&str[0]=='<')
        {
            if(a<=b)
            {
                printf("Case %d: true\n",I++);
            }
            else
            {
                printf("Case %d: false\n",I++);
            }
        }

        if(str=="<")
        {
            if(a<b)
            {
                printf("Case %d: true\n",I++);
            }
            else
            {
                printf("Case %d: false\n",I++);
            }
        }

        if(str=="==")
        {
            if(a==b)
            {
                printf("Case %d: true\n",I++);
            }
            else
            {
                printf("Case %d: false\n",I++);
            }
        }

        if(str=="!=")
        {
            if(a!=b)
            {
                printf("Case %d: true\n",I++);
            }
            else
            {
                printf("Case %d: false\n",I++);
            }
        }
    }
}
