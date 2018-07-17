#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
    	if(n==-1)break;
    	int h=n;
    	bool f=false;
    	for(int i=2;i*i<=h;i++)
    	{
    		if(n%(i*i)==0)
    		{
    			f=true;
    			break;
			}
		}
		if(!f)
		{
			printf("%d is square-free\n",n);
		}
		else
		{
			printf("%d is not square-free\n",n);
		}
	}
	return 0;
}
