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
	std::cin>>t;
	string str;
	while(t--)
	{
		std::cin>>str;
		str = 'B' + str;
		int ans=0;
		for(int j=0,i=8;i>=1;i--,j++)
		{
			ans += (str[i]-48)*pow(2,j);
		}
		cout<<ans<<".";
		ans=0;
		for(int j=0,i=16;i>=9;i--,j++)
		{
			ans += (str[i]-48)*pow(2,j);
		}
		cout<<ans<<".";
		ans=0;
		for(int j=0,i=24;i>=17;i--,j++)
		{
			ans += (str[i]-48)*pow(2,j);
		}
		cout<<ans<<".";
		ans=0;
		for(int j=0,i=32;i>=25;i--,j++)
		{
			ans += (str[i]-48)*pow(2,j);
		}
		cout<<ans<<endl;
	}
}
