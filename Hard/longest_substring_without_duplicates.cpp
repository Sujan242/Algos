// https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> h(128,-1);
        int ma=0;
        int l=0;
        
        int start=0;
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            start=max(h[c]+1,start);
            ma=max(ma,i-start+1);
            h[c]=i;
        }
        return ma;
    }
};