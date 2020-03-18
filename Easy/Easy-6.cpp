#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	int n;
	cin>>n;
	int first=0;
	int second=0;
	int third=0;
	for(int i=0;i<n;i++)
	{
		int num;
		v.push_back(num);
	}

	for(int i=0;i<n;i++)
	{
		if (v[i]>first)
		{
			int temp=second;
			second=first;
			third=temp;
			first=v[i];


		}
		else if (v[i]>second)
		{
			third=second;
			second=v[i];
		}
		else if(v[i]>third)
		{
			third=v[i];
		}
	}
	cout<<third<<" "<<second<<" "<<first<<endl;

}