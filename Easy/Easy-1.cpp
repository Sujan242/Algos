#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   // map<int, int>  a;
	    int n,x;
	    cin>>n>>x;
	    vector<int> v;
	    unordered_set <int> a;
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        scanf("%d",&num);
	        v.push_back(num);
	        if(a.find(num)==a.end())
	        {
	            a.insert(num);
	        }
	        else
	        {   if(x%2==0)
	        {
	            if(num==x/2)
	            {
	                f=1;
	            }
	        }
	        }
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        if ((a.find(x-v[i])!=a.end()) && (x-v[i]!=v[i]))
	        {
	           // cout<<v[i]<<" ";
	            f=1;break;
	        }
	    }
	    
	    if(f)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	    
	
	
	return 0;
}