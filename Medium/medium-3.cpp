// https://practice.geeksforgeeks.org/problems/unique-bsts/0

#include<bits/stdc++.h>
using namespace std;

int fun(int n,int num[])
{
    if (n==0)
    {
        return 1;
    }
    if(num[n]!=0)
    {
        return num[n];
    }
    for(int i=1;i<=n;i++)
    {
        num[n]=num[n]+fun(i-1,num)*fun(n-i,num);
    }
    return num[n];
    
}
    


int main()
 {
	//code
	int t;
	int num[20];
	memset(num,0,sizeof(num));
	
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<fun(n,num)<<endl;
	    
	}
	return 0;
}