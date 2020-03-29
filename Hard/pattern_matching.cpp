#include<bits/stdc++.h>
using namespace std;
// gogopowerrangergogopowerranger xxyxxy
int main()
{
	string s;
	cin>>s;
	string p;
	cin>>p;

	int x=0,y=0;
	int fy=-1;
	for(int i=0;i<p.length();i++)
	{
		if(p[i]=='x'){x++;}
		else{y++;if(fy==-1){fy=i;}}
	}
    // cout<<x<<" "<<y;
    // cout<<fy;

    // cout<<s.length();
	for(int i=1;i<=s.length();i++)
	{
		int ly=s.length()-x*i;
		if(ly%y!=0){continue;}
		ly=ly/y;
		// if(i==2){cout<<}

		string ax="",ay="";
		for(int j=0;j<i;j++)
		{
			ax=ax+s[j];
		}
		// j=i*fy;
		for(int j=i*fy;j<i*fy+ly;j++)
		{
			ay=ay+s[j];
		}
		// if(i==2){cout<<ax<<" "<<ay;}
		string cs="";
		for(int j=0;j<p.length();j++)
		{
			if(p[j]=='x'){cs=cs+ax;}
			else
			{
				cs=cs+ay;
			}
		}
		if(cs==s)
		{
			cout<<ax<<" "<<ay;
			break;
		}

	}
}