#include <bits/stdc++.h>

using namespace std;

int MAX=1000000;

int I=1;

bitset<1001> v;

void sieve()
{
    for(int i=2;i*i<=1000;i++)
    {
        if(v[i])continue;
        for(int j=2*i;j<=1000;j+=i)
        {
            v[j]=1;
        }
    }
}

int main()
{
    //freopen("c.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t;
    cin>>t;
    int k;
    while(t--)
    {
        cin>>k;
        vector<int> st;
        if(k%2==0)
        {
            cout<<2<<" ";
            st.push_back(2);
            k-=2;
            for(int i=k-2,j=2;;i--,j++)
            {
                if(!v[i]&&!v[j])
                {
                    cout<<j<<" "<<i<<endl;
                    //st.push_back(j);
                    //st.push_back(i);
                    break;
                }
            }
        }
        else
        {
            cout<<3<<" ";
            //st.push_back(3);
            k-=3;
            for(int i=k-2,j=2;;i--,j++)
            {
                if(!v[i]&&!v[j])
                {
                    cout<<j<<" "<<i<<endl;
                    //st.push_back(j);
                    //st.push_back(i);
                    break;
                }
            }
        }
    }
    return 0;
}

