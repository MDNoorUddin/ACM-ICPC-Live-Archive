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
		ll n,k;
		cin>>n>>k;
		vector<ll> boys(n);
		vector<ll> girls(n);
		
		for(int i=0;i<n;i++)
		{
			cin>>boys[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>girls[i];
		}
		
		vector<bool> mate(n);
		fill(mate.begin(),mate.end(),false);
		int count=0;
		for(int i=0;i<boys.size();i++)
		{
			for(int j=0;j<girls.size();j++)
			{
				if(boys[i]+girls[j]>=k&&!mate[j])
				{
					count++;
					mate[j]=true;
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
