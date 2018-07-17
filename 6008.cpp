#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int> a(n);
    	
    	for(int i=0;i<n;i++)cin>>a[i];
    	cin>>n;
    	vector<int> b(n);
    	for(int i=0;i<n;i++)cin>>b[i];
    	int minn=99999999;
    	for(int i=0;i<a.size();i++)
    	{
    		for(int j=0;j<b.size();j++)
    		{
    			if(abs(a[i]-b[j])<minn)
    			minn=abs(a[i]-b[j]);
			}
		}
		
		cout<<minn<<endl;
	}
	return 0;
}
