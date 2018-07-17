#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	string str;
    	cin>>str;
    	if(str[str.length()/2-1]==str[str.length()/2])
    	{
    		cout<<"Do-it\n";
		}
		else
		{
			cout<<"Do-it-Not\n";
		}
	}
	return 0;
}
