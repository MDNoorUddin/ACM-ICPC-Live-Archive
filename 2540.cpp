
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
	while(getline(cin,str))
	{
		if(str=="ENDOFINPUT")break;
		getline(cin,str);
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
			{
				char c=str[i];
			    c-=5;
			    if(c>=65)cout<<c;
			    else
			    {
			    	c=91-(65-c);
			    	cout<<c;
				}
			}
			else cout<<str[i];
		}
		cout<<endl;
		getline(cin,str);
	}
	return 0;
}
