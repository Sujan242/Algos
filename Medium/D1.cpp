// https://leetcode.com/problems/product-of-array-except-self/submissions/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pl[100000];
        pl[0]=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            pl[i]=pl[i-1]*nums[i];
        }
        int pr[100000];
        pr[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            pr[i]=pr[i+1]*nums[i];
        }
        
        vector<int> output;
        output.push_back(pr[1]);
        for(int i=1;i<n-1;i++)
        {
            
            output.push_back(pl[i-1]*pr[i+1]);
        }
        output.push_back(pl[n-2]);
        return output;
        
        
    }
};


