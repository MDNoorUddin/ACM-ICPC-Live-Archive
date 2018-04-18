
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
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		if(n==-1)break;
		vector<pair<int,string> > a;
		int q,b,c;
		string str;
		map<int,int> mp;
		map<int,int>::iterator it;
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>q>>b>>c>>str;
			a.push_back(make_pair(q*b*c,str));
			sum+=(q*b*c);
		}
		sum/=n;
		string A,B;
		int x,y;
		for(int i=0;i<n;i++)
		{
			if(a[i].first!=sum)
			{
				if(a[i].first<sum)
				{
					A=a[i].second;
				}
				else
				{
					B=a[i].second;
				}
			}
		}
		printf("%s took clay from %s.\n",B.c_str(),A.c_str());
	}				
}
