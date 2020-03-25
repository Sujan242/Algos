// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/submissions/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        // vector<int> c=nums;
        // sort(c.begin(),c.end());
        int n=nums.size();
        if(n==1){return 0;}
        int ma=-10000000,mi=100000;
        // int fi=0,si=n-1;
        if(nums[0]>nums[1])
                {
                    ma=max(ma,nums[0]);
                    mi=min(mi,nums[0]);
                        
                }
        if(nums[n-1]<nums[n-2])
                {
                    ma=max(ma,nums[n-1]);
                    mi=min(mi,nums[n-1]);
                    
                }
        // cout<<ma<<" "<<mi;
        for(int i=1;i<n-1;i++)
        {
             if(nums[i]>nums[i+1] || nums[i]<nums[i-1])
            {
                ma=max(ma,nums[i]);
                mi=min(mi,nums[i]);
                
            }
            
        }
        // cout<<ma<<" "<<mi;
        
        int i=0;int j=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]>mi)
            {
                break;
            }
        }
        for(j=n-1;j>=0;j--)
        {
            if(nums[j]<ma)
            {
                break;
            }
        }
        if(i==n){return 0;}
        return j-i+1;
        
        
        
    }
};