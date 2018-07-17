#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	int r;
    	cin>>n>>r;
    	string str;
    	cin>>str;
    	cout<<n<< " ";
    	for(int i=0;i<str.length();i++)
    	{
    		for(int j=1;j<=r;j++)cout<<str[i];
		}
		cout<<endl;
    }
	return 0;
}
