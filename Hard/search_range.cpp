// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
        // int l=0,r=n-1;
        vector<int> v(2,-1);
        int i=bin(nums,0,n-1,target);
        if(i==-1)
        {
            return v;
        }
        int l=i,r=i;
        while(true)
        {
            if(l>0)
            {
                int ind=bin(nums,0,l-1,target);
                if(ind==-1)
                {
                    break;
                }
                l=ind;
            }
            else
            {
                break;
            }
        }
        v[0]=l;
        while(true)
        {
            if(r<n-1)
            {
                int ind=bin(nums,r+1,n-1,target);
                if(ind==-1)
                {
                    break;
                }
                r=ind;
            }
            else
            {
                break;
            }
            
        }
        v[1]=r;
        return v;
        
    }
    
    int bin(vector<int> nums,int l,int r,int target)
    {
        while(l<=r)
        {
            int mi=(l+r)/2;
            if(target==nums[mi])
            {
                return mi;
            }
            if(target<nums[mi])
            {
                r=mi-1;
            }
            else
            {
                l=mi+1;
            }
        }
        return -1;
    }
};