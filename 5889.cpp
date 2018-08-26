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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;

int main(int argc, char** argv){
	int t;
	cin>>t;
	cin.ignore();
	string str;
	while(t--)
	{
		getline(cin,str);
		int g=0,b=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='g'||str[i]=='G')g++;
			if(str[i]=='b'||str[i]=='B')b++;
		}
		if(g>b)
		{
			printf("%s is GOOD\n",str.c_str());
		}
		else if(g<b)
		{
			printf("%s is A BADDY\n",str.c_str());
		}
		else
		{
			printf("%s is NEUTRAL\n",str.c_str());
		}
	}
	return 0;
}
