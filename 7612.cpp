#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout <<  max(a,b)*2+min(a,b)<<endl;
    }
}
