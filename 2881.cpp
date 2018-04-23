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

int main(int argc, char** argv) {
	int n,square;
	int t1,t2,t3;
	while(std::cin>>n>>square)
	{
		if(n==0&&square==0)break;
		std::cin>>t1>>t2>>t3;
		vector<int> player(n+1);
		fill(player.begin(),player.end(),0);
		
		vector<bool> trap(n+1);
		fill(trap.begin(),trap.end(),true);
		
		int Round;
		std::cin>>Round;
		int D1,D2;
		int I=1;
		int winner=-1;
		bool answer=false;
		while(Round--)
		{
			std::cin>>D1>>D2;
			if(!answer)
			{
				D1 = D1 + D2;
			while(true)
			{
				//cout<<"now running "<<I<<endl<<endl;
				if(trap[I])
				{
					//cout<<"blank before "<<I<<" value "<<player[I];
					player[I]+=D1;
					//cout<<" after "<<player[I]<<endl;
					if(player[I]>square)
					{
						//cout<<"  winner found \n";
						winner=I;
						answer=true;
						break;
					}
					if( player[I] == t1 || player[I] == t2 || player[I] == t3 )
					{
						//cout<<" now blocked\n";
						trap [I] = false;
						if(I==n)I=1;
						else I++;
						break;
					}
					else
					{
						if(I==n)I=1;
						else I++;
						break;
					}
				}
				else
				{
					//cout<<"filled "<<I<<" value "<<player[I];
					trap[I] = true;
					if(I==n)I=1;
						else I++;
				}
			}
			}
		}
		cout<<winner<<endl;
	}
}
