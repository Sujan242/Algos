// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0
#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
        stack <char> c;
        string o="";
        int n=s.length();
        for(int i=0;i<s[i];i++)
        {
            // int j=i;
            string os="";
            int r=i;int l=i;
            // odd length
            while(r<n && l>=0)
            {
                if(s[r]==s[l])
                {
                r++;
                l--;
                }
                else
                {
                    break;
                }
            }
            for(int j=l+1;j<=r-1;j++)
            {
                os=os+(s[j]);
            }
            if(os.length()>o.length())
            {
                o=os;
            }
             // cout<<os<<endl;
            
            //even length
            os="";
            if(i>=1)
            {
                if(s[i]==s[i-1])
                {
                    l=i-1;
                    r=i;
                    while(r<n && l>=0 && s[l]==s[r])
                    {
                        r++;
                        l--;
                    }
                    for(int j=l+1;j<=r-1;j++)
                    {
                         os=os+(s[j]);
                    }
                    if(os.length()>o.length())
                    {
                       o=os;
                    }
                    
                    
                    
                }
            }
           
            
        }
        return o;
        
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cout<<longestPalindrome(s)<<endl;
	    
	}
}