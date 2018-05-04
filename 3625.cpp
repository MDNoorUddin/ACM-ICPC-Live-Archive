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
#define g 9.81

int main(int argc, char** argv) {
	int t;
	cin>>t;
	ll n;
	while(t--)
	{
		cin>>n;
		if(n>10)
		{
			int temp = n%10;
			if(temp<5)n-=temp;
			else n+=(10-temp);
		}
		if(n>100)
		{
			int temp = n%100;
			if(temp<50)n-=temp;
			else n+=(100-temp);
		}
		if(n>1000)
		{
			int temp = n%1000;
			if(temp<500)n-=temp;
			else n+=(1000-temp);
		}
		if(n>10000)
		{
			int temp = n%10000;
			if(temp<5000)n-=temp;
			else n+=(10000-temp);
		}
		if(n>100000)
		{
			int temp = n%100000;
			if(temp<50000)n-=temp;
			else n+=(100000-temp);
		}
		if(n>1000000)
		{
			int temp = n%1000000;
			if(temp<500000)n-=temp;
			else n+=(1000000-temp);
		}
		if(n>10000000)
		{
			int temp = n%10000000;
			if(temp<5000000)n-=temp;
			else n+=(10000000-temp);
		}
		if(n>100000000)
		{
			int temp = n%100000000;
			if(temp<50000000)n-=temp;
			else n+=(100000000-temp);
		}
		cout<<n<<endl;
	}
	return 0;
}
