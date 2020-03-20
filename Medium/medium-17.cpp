 // https://leetcode.com/problems/subsets/submissions/
 // my solution 
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> st;
        helper(nums,0,st,ans);
        
        return ans;
        
    }
    void helper(vector<int> nums,int i,vector<int> st,vector<vector<int>> &ans)
    {
        // cout<<nums.size();
        if(i>=nums.size())
        {
            ans.push_back(st);
            return;
        }
        helper(nums,i+1,st,ans);
        st.push_back(nums[i]);
        helper(nums,i+1,st,ans);
    }
};

// preferred solution
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> st;
        ans.push_back(st);
        for(int i=0;i<nums.size();i++)
        {
            int n=ans.size();
            for(int j=0;j<n;j++)
            {
                vector<int> cp=ans[j];
                cp.push_back(nums[i]);
                ans.push_back(cp);
                
            }
        }
        
    
        
        
        return ans;
        
    }
    
    
    
};