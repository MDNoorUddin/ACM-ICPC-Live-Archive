#include<bits/stdc++.h>
#include<bitset>
#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
#include<queue>
#include<stack>
#include<deque>
#include<stdio.h>
#include<bitset>

using namespace std;

#define ll long long
#define INF 9999999
#define pfc(I,a) printf("Case %d: %d\n",I++,a)
#define pc(I) printf("Case %d: ",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define nl printf("\n");

int CS=1;

int main()
{
    //freopen("c.txt","w",stdout);
    int Z,I,M,L;
    while(cin>>Z>>I>>M>>L&&Z&&I&&M&&L)
    {
        int count=1;
        L=((Z*L)+I)%M;

        int pre=L;
        L=((Z*L)+I)%M;

        while(L!=pre)
        {
            //cout<<L<<endl;
            count++;
            L=((Z*L)+I)%M;
        }
        pfc(CS,count);
    }
}
