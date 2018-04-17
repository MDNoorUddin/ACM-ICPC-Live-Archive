
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

bool isPrime(ll n)
{
	if(n==1)return false;
	if(n==2)return true;
	if(n%2==0)return false;
	for(int i=3;i<=sqrt(n);i++)
	{
		if(n%i==0)return false;
	}
	return true;
}

int digitlRoot(ll n)
{
	while(n>=10)
	{
		if(isPrime(n))
		return n;
		//cout<<n<<endl;
		int sum=0;
		ll N=n;
		while(N>0)
		{
			sum+=N%10;
			N/=10;
		}
		n=sum;
	}
	return n;
}
int main(int argc, char** argv) {
	ll n;
	while(cin>>n)
	{
		if(n==0)break;
		ll N=digitlRoot(n);
		if(isPrime(N))
		{
			printf("%7d %7d\n",n,N);
		}
		else
		{
			printf("%7d    none\n",n);
		}
	}
	return 0;
}
