#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0

int main(int argc, char** argv) {
	//freopen("c.txt","w",std
	int t;
	cin>>t;
	int a,b,c;
	int I=1;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a<=20&&b<=20&&c<=20)
		printf("Case %d: good\n",I++);
		else
		printf("Case %d: bad\n",I++);
	}
	ret 0;
}

