
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
	vector<string> a;
	while(getline(cin,str))
	{
		if(str=="#")break;
		a.push_back(str);
	}
	for(int i=0;i<a.size();i++)
	{
		for(int j=a[i].length()+1;j<=36;j++)
		{
			a[i]=a[i]+" ";
		}
	}
	for(int i=1;i<=a.size()+a.size()+1;i++)
	{
		cout<<"-";
	}	
	cout<<endl;
	for(int i=0;i<36;i++)
	{
		cout<<"|";
		for(int j=0;j<a.size();j++)
		{
			cout<<a[j][i]<<"|";
		}
		cout<<endl;
	}
	for(int i=1;i<=a.size()+a.size()+1;i++)
	{
		cout<<"-";
	}	
	cout<<endl;
}
