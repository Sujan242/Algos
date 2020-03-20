// https://leetcode.com/problems/search-a-2d-matrix/submissions/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        if(n==0)
        {
            return 0;
        }
        int m=matrix[0].size();
        
        int x=0,y=m-1;
        while(x<n && y>=0)
        {
            if(target==matrix[x][y])
            {
                return 1;
            }
            if(target>matrix[x][y])
            {
                x++;
            }
            else
            {
                y--;
            }
            
        }
        return 0;
        
    }
};