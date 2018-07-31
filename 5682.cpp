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
#include<string.h>

using namespace std;

typedef long long ll;


#define PI acos(-1)
#define E 2.718281828459
#define g 9.81


int main(int argc, char** argv) {

    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int> a(n);
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a.begin(),a.end());
       int mx=0;
       for(int i=1;i<n;i++)
       {
           if(a[i]-a[i-1]>mx)
           {
               mx=a[i]-a[i-1];
           }

       }
       printf("Class %d\n",I++);
       printf("Max %d, Min %d, Largest gap %d\n",a[a.size()-1],a[0],mx);
    }
	return 0;
}
