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
    while(t--)
    {
        string str;
        cin>>str;
        int count=0;
        int temp=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='X')
            {
                temp=0;
            }
            else
            {
                temp++;
                count+=temp;
            }
        }
        cout<<count<<endl;
    }

	return 0;
}
