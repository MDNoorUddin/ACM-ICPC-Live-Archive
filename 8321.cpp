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
	int c,d;
	while(cin>>c>>d)
	{
		if(c==0&&d==0)break;
		int _1,_2,_3;
		_1 = (c*30) + (d*40);
		
		_2 = (c*35) + (d*30);
		
		_3 = (c*40) + (d*20);
		
		cout<<min(_1,min(_2,_3))<<endl;
	}
}
