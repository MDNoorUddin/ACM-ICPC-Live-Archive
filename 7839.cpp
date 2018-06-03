#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
#include<bitset>

using namespace std;

typedef long long ll;


#define PI acos(-1)
#define E 2.718281828459
#define g 9.81

int main(int argc, char** argv) {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> a(n);
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		priority_queue<int> b;
		for(int i=0;i<n;i++)
		{
			if(a[i]==m)
			{
				int sum=0;
				sum+=a[i];
				for(int j=i-1;j>=0;j--)
				{
					if(a[j]<=a[i])break;
					sum+=a[j];
				}
				for(int j=i+1;j<n;j++)
				{
					if(a[j]<=a[i])break;
					sum+=a[j];
				}
				
				b.push(sum);
			}
		}
		cout<<b.top()<<endl;
	}
}
