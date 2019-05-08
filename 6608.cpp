#include<bits/stdc++.h>
using namespace std;

bitset<10000001> pr;
vector<int> primes;
int count=0;
void sieve()
{
    //cout<<pr[0];
    for(int i=2;i*i<10000001;i++)
    {
        if(pr[i])continue;
        for(int j=i*2;j<1000001;j+=i)
        {
            pr[j]=i;
        }
    }
    for(int i=2;i<=1000001;i++)
    {
        if(!pr[i])primes.push_back(i);
    }
}
vector<int> tl;
void primeFctorization(int n)
{
    set<int> th;
    vector<int> ans;
    int N=n;
    n=abs(n);
    for(int i=0;i<primes.size()&&primes[i]*primes[i]<=n;i++)
    {
        while(n%primes[i]==0)
        {
            th.insert(primes[i]);
            n/=primes[i];
            ans.push_back(primes[i]);
            //cout<<primes[i]<< " ";
        }
    }
    if(n>1){
        th.insert(n);
        //cout<<n;;
        ans.push_back(n);
    }
    if(th.size()>=3)
    {
        tl.push_back(N);
        ::count++;
        //cout<<N<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //sieve();
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=56.00&&b<=45.00&&c<=25.00&&d<=7.00)
        {
            cout<<1<<endl;
            count++;
            continue;
        }
        if(a+b+c<=125.00&&d<=7.00)
        {
            cout<<1<<endl;
            count++;
            continue;
        }
            cout<<0<<endl;
    }
    cout<<count<<endl;
}
