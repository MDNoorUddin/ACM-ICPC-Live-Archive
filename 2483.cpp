
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
	string str;
	int a,b,I=1;
	cin>>str;
	while(true)
	{
		if(str=="#")break;
		printf("Set %d\n",I++);
		cin>>a>>b;
		while(true)
		{
			cin>>str;
			if(str=="COST"||str=="#")
			break;
			stringstream f(str);
			ll x;
			f>>x;
			//cout<<x<<endl;
			int sum=0;
			while(x>0)
			{
				if(x%2==0)sum+=a;
				else sum+=b;
				x/=2;
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
