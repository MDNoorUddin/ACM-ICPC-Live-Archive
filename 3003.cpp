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
	int t;
	string str;
	int x,y,z;
	while(cin>>t){
		if(t==0)break;
		int sum=0;
		vector< pair<string,int> > a;
	    while(t--)
	    {
		    cin>>str>>x>>y>>z;
		    a.push_back(make_pair(str,x*y*z));
		    sum+=(x*y*z);
	    }
	    sum/=a.size();
	    string small;
	    string big;
	    for(int i=0;i<a.size();i++)
	    {
	    	if(a[i].second<sum)small=a[i].first;
	    	if(a[i].second>sum)big=a[i].first;
		}
		if(small.empty())
		{
			printf("No child has lost jelly.\n");
		}
		else
		printf("%s has lost jelly to %s.\n",small.c_str(),big.c_str());
  }
}
