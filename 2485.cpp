
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
	while(getline(cin,str))
	{
		if(str=="#")break;
		map<char,int> mp;
		map<char,int>::iterator it;
		mp['a']=0;mp['e']=0;mp['i']=0;mp['o']=0;mp['u']=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u')
			{
				mp[str[i]]++;
			}
			if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			{
				str[i]=str[i]+32;
				mp[str[i]]++;
			}
		}
		vector< pair <int,char> > a;
		a.push_back(make_pair(-mp['a'],'a'));a.push_back(make_pair(-mp['e'],'e'));a.push_back(make_pair(-mp['i'],'i'));
		a.push_back(make_pair(-mp['o'],'o'));a.push_back(make_pair(-mp['u'],'u'));
		sort(a.begin(),a.end());
		printf("%c:%d %c:%d %c:%d %c:%d %c:%d.\n",a[0].second,abs(a[0].first),a[1].second,abs(a[1].first),
		a[2].second,abs(a[2].first),a[3].second,abs(a[3].first),
		a[4].second,abs(a[4].first));
	}
	return 0;
}
