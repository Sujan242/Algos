#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long x;
	    cin>>x;
	    long n;cin>>n;
	    vector<long> c;
	    long nm[1000003];
	   // nm[0]=0;
	    memset(nm,1000000,sizeof(nm));
	   // nm[0]=1;
	    for(long i=0;i<n;i++)
	    {
	        long num;cin>>num;
	        c.push_back(num);
	        nm[num]=1;
	    }
	    sort(c.begin(),c.end());
	    for(long i=0;i<n;i++)
	    {
	        for(long j=1;j<=x;j++)
	        {
	            if(j>=c[i])
	            nm[j]=min(nm[j],1+nm[j-c[i]]);
	        }
	    }
	    if(nm[x]>=1000000)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	    cout<<nm[x]<<endl;
	    }
	    
	    
	}
	return 0;
}