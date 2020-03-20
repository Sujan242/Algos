#include<bits/stdc++.h>
using namespace std;

// int max_sum(vector<int> v,int i,int sum,int ms[])
// {
    
//     if(ms[i]!=-1)
//     {
//         return ms[i];
//     }
//     if(i>=v.size())
//     {
//         return sum;
//     }
    
//     return max(max_sum(v,i+2,sum+v[i],ms),max_sum(v,i+1,sum,ms));
// }
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int ms[100001];
	    memset(ms,-1,sizeof(ms));
	    cin>>n;
	    vector <int> v;
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        cin>>num;
	        v.push_back(num);
	    }
	    ms[0]=v[0];
	    ms[1]=max(v[0],v[1]);
	    for(int i=1;i<n;i++)
	    {
	        ms[i]=max(ms[i-1],ms[i-2]+v[i]);
	    }
	    cout<<ms[n-1]<<endl;
	    
	}
	return 0;
}