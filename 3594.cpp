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
#define g 9.81

int main(int argc, char** argv) {
	string str;
	while(getline(cin,str))
	{
		if(str=="#")break;
		int count=1;
		ll sum=0;
		for(int i=0;i<str.length();i++,count++)
		{
			if(str[i]!=' ')
			{
				sum+=((str[i]-64)*count);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
