#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
/// "YES"

ll tree[1600001];
ll a[4*100001];

void build(int k,int s,int e)
{
    if(s==e)
    {
        tree[k]=a[s];
        return;
    }
    int mid=(s+e)/2;
    build(2*k,s,mid);
    build(2*k+1,mid+1,e);
    tree[k]=__gcd(tree[k*2],tree[2*k+1]);
}


bitset<1000001> pr;
vector<ll> primes;
void sieve()
{
    //cout<<pr[0];
    for(ll i=2;i*i<1000001;i++)
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

void primeFctorization(ll n)
{
    int count=1;
    ll N=n;

    for(int i=0;i<primes.size()&&primes[i]*primes[i]<=n;i++)
    {
        int temp=0;
        while(n%primes[i]==0)
        {
            //th.insert(primes[i]);
            n/=primes[i];
            temp++;
            //ans.push_back(primes[i]);
            //cout<<primes[i]<< " ";
        }
        if(temp)
        {
            count=count*(temp+1);
        }
    }
    if(n>1){
        count=count*2;
    }
    cout<<count<<endl;
}
bool isprime(int n)
{
    if(n==2)return true;
    if(n%2==0)return false;
    //if(n%3==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int n,a,d;
        cin>>n>>a>>d;
        sum=a;
        n--;
        int pre=a;
        while(n--)
        {
            pre+=d;
            sum+=pre;
        }
        cout<<sum<<endl;
    }
}
