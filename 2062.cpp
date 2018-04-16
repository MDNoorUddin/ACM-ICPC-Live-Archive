
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
typedef std::vector<ll> vi;

#define PI acos(-1)
#define E 2.718281828459

bool isConst(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		return false;
	}
	return true;
}
bool isVowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		return true;
	}
	return false;
}
int main(int argc, char** argv) {
	string str;
	while(getline(cin,str))
	{
		if(str=="end")break;
		int vowel=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u')vowel++;
		}
		//cout<<vowel<<" "<<str.length()<<endl;;
		if(!vowel)
		{
			printf("<%s> is not acceptable.\n",str.c_str());
			continue;
		}
		bool accepted=true;
		int x=str.length();
		for(int i=0;i<x-1;i++)
		{
			if(str[i]==str[i+1])
			{
				if(str[i]=='o'||str[i]=='e')
				{
					//cout<<str[i]<<" ok\n";
					continue;
				}
				else
				{
					//cout<<str[i]<<" not ok\n";
					accepted=false;
					break;
				}
			}
		}
		if(!accepted)
		{
			printf("<%s> is not acceptable.\n",str.c_str());
		}
		else
		{
			if(str.length()>=3){
			int X=str.length()-2;	
			for(int n=0;n<X;n++)
			{
				//cout<<"X "<<X<<endl;
				//cout<<str.length()-1;
				//cout<<"in";
				 if(isConst(str[n])&&isConst(str[n+1])&&isConst(str[n+2]))
				 {
				 	//cout<<" const ";
				 	accepted=false;
					break;
				 }
				 if(isVowel(str[n])&&isVowel(str[n+1])&&isVowel(str[n+2]))
				 {
				 	//cout<<" vowel ";
				 	accepted=false;
					break;
				 }
			}
		}
			if(!accepted)
			{
				printf("<%s> is not acceptable.\n",str.c_str());
				continue;
			}
			else
			{
				printf("<%s> is acceptable.\n",str.c_str());
			}
		}
	}
}
