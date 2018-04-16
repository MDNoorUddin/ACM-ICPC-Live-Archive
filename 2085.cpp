
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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459

int digitlRoot(ll n)
{
	while(n>=10)
	{
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
	string str;
	while(cin>>str)
	{
		ll n=0;
		for(int i=0;i<str.length();i++)
		{
			n+=(str[i]-48);
		}
		if(n==0)break;
		n=digitlRoot(n);
		cout<<n<<endl;
	}
}
