#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
    	ll num;cin>>num;
    	v.push_back(num);
    }
    // ll dp[1000007];
    // dp[0]=v[0];
   ll ma=v[0];
    for(ll i=1;i<n;i++)
    {
         if(v[i]>=0)
         {
             v[i]=max(v[i],v[i-1]+v[i]);
         }
         else 
         {
              v[i]=v[i-1]+v[i];
         }
         if(v[i]>ma)
         {
         	ma=v[i];
         }
    }
    cout<<ma<<endl;
	}
	return 0;
}