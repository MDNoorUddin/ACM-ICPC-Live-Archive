
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
		string temp,cep;
		int i;
		for(i=0;i<str.length();i++)
		{
			if(str[i]==':')break;
			temp=temp+str[i];
		}
		for(int j=i+1;j<str.length();j++)
		{
			cep=cep+str[j];
		}
		stringstream f(temp);
		ll n;
		f>>n;
		//cout<<n<<endl;
		int digit;
		int letter;
		if(abs(n)<=25)
		{
			letter=n;
		}
		else
		{
			letter=n%26;
		}
		if(abs(n)<=9)
		{
			digit=n;
		}
		else
		{
			digit=n%10;
		}
		for(int i=0;i<cep.length();i++)
		{
			if(cep[i]>='A'&&cep[i]<='Z')
			{
				char c=cep[i];
				if(c+letter>90)
				{
					c=64+(c+letter-90);
				}
				else if(c+letter<65)
				{
					c=91-(65-(c+letter));
				}
				else c=c+letter;
				cout<<c;
			}
			else if(cep[i]>='a'&&cep[i]<='z')
			{
				char c=cep[i];
				if(c+letter>122)
				{
					c=96+(c+letter-122);
				}
				else if(c+letter<97)
				{
					c=123-(97-(c+letter));
				}
				else
				c=c+letter;
				cout<<c;
			}
			else if(cep[i]>='0'&&cep[i]<='9')
			{
				char c=cep[i];
				if(c+digit>57)
				{
					c=47+(c+digit-57);
				}
				else if(c+digit<48)
				{
					c=58-(48-(c+digit));
				}
				else c=c+digit;
				cout<<c;
			}
			else
			{
				cout<<cep[i];
			}
		}
		cout<<endl;
	}
}
