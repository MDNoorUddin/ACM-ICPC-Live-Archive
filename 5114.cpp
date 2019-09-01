#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
/// "YES"
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(k==0)
        {
            cout<<0<<endl;
            continue;
        }
        int mn=999999999;
        for(int j=0,i=k-1;i<n;i++,j++)
        {
            mn=min(mn,a[i]-a[j]);
        }
        cout<<mn<<endl;
    }
}

