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
	    int x;
	    cin>>n>>x;
	    unordered_set<int> s;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        cin>>num;
	        s.insert(num);
	        v.push_back(num);
	    }
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            auto itr=s.find(x-v[i]-v[j]);
	            if(itr!=s.end())
	            {
	                if (*itr!=v[i] && *itr!=v[j])
	                {
	                    f=1;
	                    break;
	                }
	            }
	        }
	        if(f)
	        {break;}
	    }
	    if(f)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	    
	}
	return 0;
}