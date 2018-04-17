
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
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> a(n+1);
		fill(a.begin(),a.end(),1);
		for(int i=2;i<=n;i++)
		{
			for(int j=i;j<=n;j+=i)
			{
				if(a[j]==1)a[j]=0;
				else a[j]=1;
			}
		}
		int count=0;
		for(int i=1;i<=n;i++)
		{
			count+=a[i];
		}
		cout<<count<<endl;
	}
	return 0;
}
