
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

vi a;
void Sieve()
{
	a.push_back(1);
	for(int i=1;i<=9;i++)
	{
		a.push_back(i*a[i-1]);
	}
	double sum=0;
	cout<<"n e\n";
	cout<<"- -----------\n";
	for(int i=0;i<=9;i++){
		sum+=(1/a[i]);
		if(i<=2)
		{
			cout<<i<<" "<<sum<<endl;
			continue;
		}
		printf("%d %.9llf\n",i,sum);
	}
	return;
}

int main(int argc, char** argv) {
	Sieve();
}
