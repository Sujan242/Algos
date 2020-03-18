#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    vector <int> v;
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        cin>>num;
	        v.push_back(num);
	    }
	    int start=0;
	    int mid=0;
	    int end=n-1;
	    while(start<=end)
	    {
	        mid=(start+end)/2;
	        if (x==v[mid])
	        {
	            cout<<1<<endl;
	            break;
	        }
	        if(x<v[mid])
	        {
	            end=mid-1;
	        }
	        else
	        {
	            start=mid+1;
	        }
	    }
	    if (start>end)
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}