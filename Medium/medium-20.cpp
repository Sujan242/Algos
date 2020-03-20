// https://leetcode.com/problems/valid-parentheses/submissions/

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> c;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                c.push(s[i]);
                // cout<<"pushed"<<" "<<s[i];
            }
            else
            {
                if(c.size()==0){return 0;}
                char ch=c.top();
                if(s[i]==')' && ch=='(')
                {
                    c.pop();
                    // cout<<"popped"<<" "<<s[i];
                }
                else if(s[i]==']' && ch=='[')
                {
                    c.pop();
                    // cout<<"popped"<<" "<<s[i];
                }
                else if(s[i]=='}' && ch=='{')
                {
                    c.pop();
                    // cout<<"popped"<<" "<<s[i];
                }
                else
                {
                    return 0;
                }
            }
        }
        if(c.size()>0)
        {
            return 0;
        }
        // cout<<"S";
        return 1;
        
    }
};