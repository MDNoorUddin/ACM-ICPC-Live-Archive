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
using namespace std;

typedef long long ll;

#define MAX 999999999999
#define MIN -99999999999
#define MAXSIZE 1024
#define pf(I,a) printf("Case %d: %d\n",I++,a);
#define pd(I,a) printf("Case %d: %.10lf\n",I++,a);
#define sc(a) scanf("%d",&a)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    while(getline(cin,str))
    {
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=65&&str[i]<=90)
            {
                count+=(str[i]-64);
            }
        }
        if(count<=100)
        cout << count << endl;
        else cout << "INVALID\n";
    }
    return 0;
}
