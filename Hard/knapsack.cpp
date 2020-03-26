#include<bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0
int fun(vector<int> w,vector<int> v,int i,int k)
{
    // cout<<k<<" ";
    if(i>=w.size()|| k<=0)
    {
        return 0;
    }
    if(k<w[i])
    {
        return fun(w,v,i+1,k);
    }
    
    
    return max(fun(w,v,i+1,k),v[i]+fun(w,v,i+1,k-w[i]));
}


int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> v;
	    vector<int> w;
	    for(int i=0;i<n;i++)
	    {
	        int num;cin>>num;
	        v.push_back(num);
	    }
	    for(int i=0;i<n;i++)
	    {
	        int num;cin>>num;
	        w.push_back(num);
	    }
	   // cout<<fun(w,v,0,k)<<endl;
	   // cout<<k;
	   vector<vector<int>> dp(n+1,vector<int>(k+1,0));
	   
	   for(int i=1;i<=n;i++)
	   {
	       for(int j=1;j<=k;j++)
	       {
	           if(j-w[i-1]<0)
	           {
	               dp[i][j]=dp[i-1][j];
	           }
	           else
	           {
	               dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i-1][j-w[i-1]]);
	           }
	       }
	   }
	   cout<<dp[n][k]<<endl;
	   
	    
	}
	return 0;
}