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


#define PI acos(-1)
#define E 2.718281828459
#define g 9.81

int main(int argc, char** argv) {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int nn=n;
		set<int> a;
		int y;
		while(n--)
		{
			cin>>y;
			a.insert(y);
		}
		cout<<nn-a.size()<<endl;
	}
}
