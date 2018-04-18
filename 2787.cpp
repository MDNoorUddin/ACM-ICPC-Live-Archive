
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
		map<int,int> mp;
		map<int,int>::iterator it;
		int count=0;
		vector<int> a;
		while(true)
		{
			if(count!=0)cin>>n;
			if(n==0)break;
			count++;
			a.push_back(n);
			mp[n]=1;
		}
		count=0;
		for(int i=0;i<a.size();i++)
		{
			it=mp.find(a[i]*2);
			if(it!=mp.end())
			{
				count++;
			}
		}
		cout<<count<<endl;
	}			
}
