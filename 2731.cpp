
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
	string str;
	map<char,int> mp;
	mp['%']=0;
	mp[')']=1;
	mp['~']=2;
	mp['@']=3;
	mp['?']=4;
	mp['\\']=5;
	mp['$']=-1;
	while(cin>>str)
	{
		if(str=="#")break;
		reverse(str.begin(),str.end());
		ll sum=0;
		for(int i=0;i<str.length();i++)
		{
			sum+=(mp[str[i]]*pow(6,i));
		}
		cout<<sum<<endl;
	}
}
