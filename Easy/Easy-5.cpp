#include <bits/stdc++.h>
using namespace std;
#define mo 1000000007

long fibo(int n,long *f)
{
    if (f[n]!=0)
    {
        return f[n];
    }
    if(n==1 || n==2)
    {
        return 1;
    }
    
    return f[n]=(fibo(n-1,f)%mo+fibo(n-2,f)%mo)%mo;
}

int main() {
	//code
	int t;
	cin>>t;
	long *f=new long[1001];
	memset(f,0,sizeof(f));
	
	while(t--)
	{
	    long n;
	    cin>>n;
	    cout<<fibo(n,f)<<endl;
	}
// 	cout<<f[3];
	return 0;
}