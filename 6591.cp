#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "\n" ^ **/


typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;

vector<ll> a(200001);
vector<ll> Tree(800001);
vector<ll> lazy(800001);

void build(int k,int s,int e)
{
    if(s==e)
    {
        Tree[k]=a[s-1];
        return;
    }
    int mid=(s+e)/2;
    build(2*k,s,mid);
    build(2*k+1,mid+1,e);
    Tree[k]=Tree[2*k]+Tree[2*k+1];
}

void updateRange(int node, int start, int end, int l, int r, int val)
{
    if(lazy[node] != 0)
    {
        Tree[node] += (end - start + 1) * lazy[node];
        if(start != end)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(start > r || end < l)
        return;
    if(start >= l and end <= r)
    {
        Tree[node] += (end - start + 1) * val;
        if(start != end)
        {
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);
    updateRange(node*2 + 1, mid + 1, end, l, r, val);
    Tree[node] = Tree[node*2] + Tree[node*2+1];
}

ll search(int k,int s,int e,int l,int r)
{
    if(lazy[k]!=0)
    {
        Tree[k]+=(e-s+1)*lazy[k];
        if(s!=e)
        {
            lazy[2*k]+=lazy[k];
            lazy[2*k+1]+=lazy[k];
        }
        lazy[k]=0;
    }
    if(s>r||e<l)return 0;
    if(s>=l&&e<=r)return Tree[k];
    int mid = (s + e) / 2;
    ll p1=search(k*2, s, mid, l, r);
    ll p2=search(k*2 + 1, mid + 1, e, l, r);
    return (p1 + p2);
}

vector<vi> g(10001);
vector<int> V(10001);
bool f=false;
void dfs(int k,int pre)
{
    if(V[k])
    {
        f=true;;
        return;
    }
    V[k]=1;
    for(auto e:g[k])
    {
        if(e!=pre)
            dfs(e,k);
    }
}
int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  in(i,t)
  {
      ll k;
      cin>>k;
      ll sum=1;
      for(int i=1;i<=k;i++)
        sum=sum*2;
      cout<<sum-1<<endl;
  }
}

