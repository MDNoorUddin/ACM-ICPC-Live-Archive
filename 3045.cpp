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
vector<int>  a(10001);
void sieve()
{
	fill(a.begin(),a.end(),0);
	for(int i=1,j=1,counter=1;i<=10000;i++)
	{
		a[i]=a[i-1]+j;counter++;
		if(counter>j)
		{
			j++;
			counter=1;
		}
	}
	//for(int i=1;i<=10000;i++)cout<<i<<" "<<a[i]<<endl;
}
int main(int argc, char** argv) {
	sieve();
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		printf("%d %d\n",n,a[n]);
	}
}
