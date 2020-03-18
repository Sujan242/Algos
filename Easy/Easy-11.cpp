#include<bits/stdc++.h>
using namespace std;

int pal(string s,int n,int i)
{
    
    if(n-i-1<=i)
    {
        return 1;
    }
    if(s[n-i-1]==s[i])
    {
        return pal(s,n,i+1);
    }
    
    return 0;
    
}


int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(pal(s,n,0)==0)
	    {
	        cout<<"No"<<endl;
	    }
	    else
	    {
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}