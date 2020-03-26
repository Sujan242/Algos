// https://leetcode.com/problems/trapping-rain-water/submissions/
class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        vector<int> left(n);
        vector<int> right(n);
        int maleft=0,maright=0;
        
        for(int i=0;i<n;i++)
        {
            maleft=max(maleft,height[i]);
            left[i]=maleft;
        }
        
        for(int i=n-1;i>=0;i--)
        {
            maright=max(maright,height[i]);
            right[i]=maright;
        }
        int area=0;
        for(int i=0;i<n;i++)
        {
            area=area+(min(right[i],left[i])-height[i]);
            
        }
        return area;
    }
};