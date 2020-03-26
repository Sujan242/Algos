// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence/0

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
     ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;cin>>n;
	    vector<ll> v;
	    
	    for(ll i=0;i<n;i++)
	    {
	        ll num;cin>>num;
	        v.push_back(num);
	    }
	    vector<ll> dp(n,0);
	    dp[0]=v[0];
	    ll ma=dp[0];
	    for(ll i=1;i<n;i++)
	    {
	        dp[i]=v[i];
	        for(ll j=0;j<i;j++)
	        {
	            if(v[i]>v[j])
	            {
	                dp[i]=max(dp[i],dp[j]+v[i]);
	            }
	        }
	        ma=max(dp[i],ma);
	    }
	    cout<<ma<<endl;
	}
	return 0;
}