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
	//freopen("c.txt","w",stdout);
	int a,b,c;
	int d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		int ns=0;
		if(d>a)ns+=(d-a);if(e>b)ns+=(e-b);if(f>c)ns+=(f-c);
		cout<<ns<<endl;
	}
}
