// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int start=0,end=n-1;
        
        while(start<=end)
        {
            int mid=(start+end)/2;
            // cout<<nums[start]<<" "<<nums[end]<<" "<<nums[mid]<<" ";
            if(nums[mid]==target)
            {
                return mid;
            }
            
            if(nums[start]==target){return start;}
            if(nums[end]==target){return end;}
            
            int l=nums[start],r=nums[end],m=nums[mid];
            if(l<m)
            {
                if(target<m && target>l)
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
                
            }
            else
            {
                if(target>m && target<r)
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
            
        }
        return -1;
    }
};