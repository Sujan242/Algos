// https://leetcode.com/problems/permutations/submissions/
class Solution {
public:
    
    vector<vector<int>> permute(vector<int>& nums) {
        
            vector<vector<int>> ans;
            helper( nums,0,ans);
            
            return ans;
        
    }
    
    
    void helper(vector<int>& nums,int i,vector<vector<int>> &ans)
    {
        // int temp;
        if(i==nums.size())
        {
            ans.push_back(nums);
        }
        else
        {
            helper(nums,i+1,ans);
            for(int j=i+1;j<nums.size();j++)
            {
                
                temp=nums[i];nums[i]=nums[j];nums[j]=temp;
                helper(nums,i+1,ans);
            
                temp=nums[i];nums[i]=nums[j];nums[j]=temp;
            }
        }
    }
        
   
};