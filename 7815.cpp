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
    long long n;
    while(cin>>n&&n)
    {
        if(n<=1000000)cout<<n<<endl;
        else if(n<=5000000)
        {
            cout<<n-((n*10)/100)<<endl;
        }
        else
        {
            cout<<n-((n*20)/100)<<endl;
        }
    }
}
