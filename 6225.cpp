#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
    	vector<int> a(10);
    	fill(a.begin(),a.end(),1);
    	long long h=n;
    	long long c=n;
    	int count=0;
    	while(true)
    	{
    		count++;
    		n=h;
    		while(n>0)
    		{
    			//cout<<n%10;
    			a[n%10]--;
    			n=n/10;
    			//cout<<"______\n";
			}
			
				bool k=true;
		    for(int i=0;i<10;i++)
		    {
			   if(a[i]>0){
				 k=false;
				 break;
			  }
	    	}
		     if(k)
		    {
			    cout<<count<<endl;
			    break;
		    }
		    h=h+c;
		}
	
    	
	}
	return 0;
}
