
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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459

int digitlRoot(ll n)
{
	while(n>=10)
	{
		//cout<<n<<endl;
		int sum=0;
		ll N=n;
		while(N>0)
		{
			sum+=N%10;
			N/=10;
		}
		n=sum;
	}
	return n;
}
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	string str;
	while(cin>>str)
	{
		vector<string> a;
		map<string,int> mp;
		map<string,int> index;
		map<string,int>::iterator it;
		int Index=0;
		int count=0;
		while(true)
		{
			if(count!=0)
			{
				getline(cin,str);
				if(str=="#")break;
			}
			count++;
			string temp;
			for(int i=0;i<str.length();i++)
			{
				if(str[i]>='A'&&str[i]<='Z')
				{
					str[i]+=32;
				}
				if(str[i]>='a'&&str[i]<='z')
				{
					temp=temp+str[i];
				}
				else
				{
					if(!temp.empty())
					{
						a.push_back(temp);
						mp[temp]++;
						index[temp]=Index++;
						temp.clear();
					}
				}
			}
			if(!temp.empty())
			{
				a.push_back(temp);
				mp[temp]++;
		     	index[temp]=Index++;
				temp.clear();
			}
		}
		if(a.empty())
		{
			break;
		}
		int mx=0;
		it=mp.begin();
		while(it!=mp.end())
		{
			if(it->second > mx)mx=it->second;
			it++;
		}
		vector<string> b;
		for(int i=0;i<a.size();i++)
		{
			it=mp.find(a[i]);
			if(it->second==mx)
			{
				//cout<<"    "<<mx<< " "<<a[i]<<endl;
				b.push_back(a[i]);
			}
		}
		map<int,string> last;
		map<int,string>::iterator lt;
		for(int j=0;j<b.size();j++)
		{
			it=index.find(b[j]);
			last[it->second]=b[j];
		}
		lt=last.begin();
		printf("%4d",mx);
		cout<<" "<<lt->second<<endl;
	}
	return 0;
}
