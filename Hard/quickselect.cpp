// https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
         return quicksort(nums,k,0,nums.size()-1);
    }
    
    
    int partition(vector<int> &a,int i,int j)
    {
        int p=a[j];
        
        int l=i,r=j-1;
        while(l<=r)
        {
            if(a[l]>p && a[r]<=p)
            {
                int temp=a[l];a[l]=a[r];a[r]=temp;
                l++;r--;
            }
            if(a[r]>p){r--;}
            if(a[l]<=p){l++;}
        }
        int temp=a[l];a[l]=a[j];a[j]=temp;
        // cout<<l<<" ";
        return l;
        
    }
    
    int quicksort(vector<int> a,int k,int i,int j)
    {
        int n=a.size();
        
        int ind=partition(a,i,j);
            // int indc=ind+1;
        int rank=n-k+1;
        if(ind+1==rank)
        {
            return a[ind];
        }
        if(ind+1>rank)
        {
                return quicksort(a,k,i,ind-1);
        }
        else
        {
                return quicksort(a,k,ind+1,j);
        }
       
    }
};