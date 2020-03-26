// https://leetcode.com/problems/decode-ways/
class Solution {
public:
    
    int numDecodings(string s) {
        vector<int> h(s.length(),0);
        return helper(s,0,h);
        
    }
    
    int helper(string s,int i,vector<int> &h)
    {
        if(i>=s.length())
        {
            return 1;
        }
        if(h[i]!=0)
        {
            return h[i];
        }
        if(s[i]=='0')
        {
            return 0;
        }
        
        if(i<s.length()-1)
        { if((s[i]-'0')*10+(s[i+1]-'0')<27)
        {
            if(s[i+1]=='0'){return h[i]= helper(s,i+2,h);}
            return h[i]=helper(s,i+1,h)+helper(s,i+2,h);
        }
        }
        
        return h[i]=helper(s,i+1,h);
        
    }
};