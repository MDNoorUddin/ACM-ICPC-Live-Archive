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
		for(int i=0;i<str.length();i++)
		{
			if(str[i]==' ')
			cout<<"%20";
			else if(str[i]=='!')cout<<"%21";
			else if(str[i]=='$')cout<<"%24";
			else if(str[i]=='%')cout<<"%25";
			else if(str[i]=='(')cout<<"%28";
			else if(str[i]==')')cout<<"%29";
			else if(str[i]=='*')cout<<"%2a";
			else cout<<str[i];
		}
		cout<<endl;
	}
	return 0;
}
