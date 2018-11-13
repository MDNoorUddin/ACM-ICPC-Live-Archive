#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        string m=str;
        reverse(str.begin(),str.end());
        //cout << str << " " << m << endl;
        if(m==str)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
