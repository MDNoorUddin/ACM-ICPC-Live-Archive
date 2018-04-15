
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
typedef std::vector<ll> vi;

#define PI acos(-1)
#define E 2.718281828459

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	ll a,b;
	while(t--)
	{
		std::cin>>a>>b;
		if(a==b)
		{
			if(b%2==0)
			{
				cout<<b*2<<endl;
			}
			else
			{
				cout<<(b*2)-1<<endl;
			}
		}
		else if(b+2==a)
		{
			if(b%2==0)
			{
				cout<<b*2+2<<endl;
			}
			else
			{
				cout<<(b*2)+1<<endl;
			}
		}
		else
		{
			cout<<"No Number\n";
		}
	}
}
