#include <vector>
#include<bits/stdc++.h>
using namespace std;

// https://www.algoexpert.io/questions/Largest%20Range
vector<int> largestRange(vector<int> array) {
  // Write your code here.
	// maps<int,int> m;
	map<int,int> s;
	int n=array.size();
	for(int i=0;i<n;i++)
	{
		s.insert(make_pair(array[i],i));
	}
	vector<int> v(2);
	vector<int> h(n,0);
	int ma=0;
	for(int i=0;i<n;i++)
	{
		if(h[i]==1){continue;}
		// if(s.find(arr[i])==s.end()){continue;}
		int x=array[i];
		while(s.find(x)!=s.end())
		{
			// s.remove(x);
			h[s.find(x)->second]=1;
			x++;
		}
		if(x-array[i]+1>ma)
		{
			v.clear();
			ma=x-array[i]+1;
			if(x==array[i])
			v.push_back(array[i]);
			
			else
			{
				v.push_back(array[i]);v.push_back(x-1);
			}
				
		}
	}
  return v;
}
