
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
	//freopen("c.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		vector<int> a;
		int N=n;
		string str;
		string rev;
		//base 2
		char c;
		while(N>0)
		{
			c=N%2+48;
			str=str+c;
			N/=2;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(2);
		}
		str.clear();rev.clear();N=n;
		
		//base 3
		while(N>0)
		{
			c=N%3+48;
			str=str+c;
			N/=3;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(3);
		}
		str.clear();rev.clear();N=n;
		
		//base 4
		while(N>0)
		{
			c=N%4+48;
			str=str+c;
			N/=4;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(4);
		}
		str.clear();rev.clear();N=n;
		
		//base 5
		while(N>0)
		{
			c=N%5+48;
			str=str+c;
			N/=5;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(5);
		}
		str.clear();rev.clear();N=n;
		
		//base 6
		while(N>0)
		{
			c=N%6+48;
			str=str+c;
			N/=6;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(6);
		}
		str.clear();rev.clear();N=n;
		
		//base 7
		while(N>0)
		{
			c=N%7+48;
			str=str+c;
			N/=7;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(7);
		}
		str.clear();rev.clear();N=n;
		
		//base 8
		while(N>0)
		{
			c=N%8+48;
			str=str+c;
			N/=8;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(8);
		}
		str.clear();rev.clear();N=n;
		
		//base 9
		while(N>0)
		{
			c=N%9+48;
			str=str+c;
			N/=9;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(9);
		}
		str.clear();rev.clear();N=n;
		
		//base 10
		while(N>0)
		{
			c=N%10+48;
			str=str+c;
			N/=10;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(10);
		}
		str.clear();rev.clear();N=n;
		
		//base 11
		while(N>0)
		{
			c=N%11+48;
			if(N%11==10)c='A';
			str=str+c;
			N/=11;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(11);
		}
		str.clear();rev.clear();N=n;
		
		
		//base 12
		while(N>0)
		{
			c=N%12+48;
			if(N%12==10)c='A';if(N%12==11)c='B';
			str=str+c;
			N/=12;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(12);
		}
		str.clear();rev.clear();N=n;
		
		//base 13
		while(N>0)
		{
			c=N%13+48;
			if(N%13==10)c='A';if(N%12==11)c='B';if(N%13==12)c='C';
			str=str+c;
			N/=13;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(13);
		}
		str.clear();rev.clear();N=n;
		
		//base 14
		while(N>0)
		{
			c=N%14+48;
			if(N%14==10)c='A';if(N%14==11)c='B';if(N%14==12)c='C';if(N%14==13)c='D';
			str=str+c;
			N/=14;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(14);
		}
		str.clear();rev.clear();N=n;
		
		//base 15
		while(N>0)
		{
			c=N%15+48;
			if(N%15==10)c='A';if(N%15==11)c='B';if(N%15==12)c='C';if(N%15==13)c='D';if(N%15==14)c='E';
			str=str+c;
			N/=15;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(15);
		}
		str.clear();rev.clear();N=n;
		
		//base 16
		while(N>0)
		{
			c=N%16+48;
			if(N%16==10)c='A';if(N%16==11)c='B';if(N%16==12)c='C';if(N%16==13)c='D';if(N%16==14)c='E';if(N%16==15)c='F';
			str=str+c;
			N/=16;
		}
		rev=str;
		reverse(rev.begin(),rev.end());
		if(str==rev)
		{
			a.push_back(16);
		}
		if(a.empty())
		{
			printf("Number %d is not palindrom\n",n);
		}
		else
		{
			printf("Number %d is palindrom in basis",n);
			for(int i=0;i<a.size();i++)
			{
				cout<<" "<<a[i];
			}
			cout<<endl;
		}
	}
	return 0;
}
