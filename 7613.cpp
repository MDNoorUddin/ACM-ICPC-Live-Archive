#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int o=0,h=0,c=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='O')o++;
            else if(str[i]=='H')h++;
            else c++;
        }
        cout << (o*16) + h + (c*12) << endl;
    }
}
