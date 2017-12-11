#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	string str;
	while(getline(cin,str)&&str!="-1")
	{
		vector<int> a(27);
		fill(a.begin(),a.end(),0);
		string temp;
		int count=0;
		bool ch=false;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]!=' ')
			{
				temp=temp+str[i];
				if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
				  {
				  	ch=true;
				  	if(str[i]>=65&&str[i]<=90)
				  	{
				  		a[str[i]-64]++;
					}
					else
					{
						a[str[i]-96]++;
					}
				  }
			}
			else
			{
				if(ch)
				count++;
				temp.clear();
				ch=false;
			}
			
		}
		if(!temp.empty())
		{
			    if(ch)
				count++;
				temp.clear();
				ch=false;
		}
		cout<<count<<" ";
		for(int i=1;i<=25;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<a[26]<<endl;
	}
	ret 0;
}

