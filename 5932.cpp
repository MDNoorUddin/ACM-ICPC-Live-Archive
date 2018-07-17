#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		if(str=="END")break;
		vector<int> a(26);
		fill(a.begin(),a.end(),0);
		for(int i=0;i<str.length();i++)
		{
			a[str[i]-65]++;
		}
		bool print=true;
		for(int i=0;i<26;i++)
		{
			if(a[i]>1)
			{
				print=false;
				break;
			}
		}
		if(print)
		cout<<str<<endl;
	}
	return 0;
}
