#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    int num[n+1][m+1];
	    num[0][0]=0;
	    for(int i=0;i<=n;i++)
	    {
	        num[i][0]=i;
	    }
	    for(int i=0;i<=m;i++)
	    {
	        num[0][i]=i;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=m;j++)
	        {
	            if(s1[i-1]==s2[j-1])
	            {
	                num[i][j]=num[i-1][j-1];
	            }
	            else
	            {
	                num[i][j]=1+min(min(num[i-1][j-1],num[i-1][j]),num[i][j-1]);
	            }
	        }
	    }
	    cout<<num[n][m]<<endl;
	    
	}
	return 0;
}