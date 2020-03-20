#include<bits/stdc++.h>
using namespace std;


int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        int num;cin>>num;
	        v.push_back(num);
	    }
	    int x;
	    cin>>x;
	    int nm[40000];
	    memset(nm,0,sizeof(nm));
	    nm[0]=1;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=1;j<=x;j++)
	        {
	            if(j-v[i]>=0)
	            nm[j]=nm[j]+nm[j-v[i]];
	        }
	    }
	    cout<<nm[x]<<endl;
	    
	}
	return 0;
}