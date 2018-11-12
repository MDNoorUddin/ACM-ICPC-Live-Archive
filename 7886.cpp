#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        set<int> it;
        it.insert(abs((a+b)-(c+d)));
        it.insert(abs((a+c)-(b+d)));
        it.insert(abs((a+d)-(b+c)));

        it.insert(abs((b+c)-(a+d)));
        it.insert(abs((b+d)-(a+c)));

        it.insert(abs((c+d)-(a+b)));

        auto e=it.begin();
        cout<<*e<<endl;
    }
}
