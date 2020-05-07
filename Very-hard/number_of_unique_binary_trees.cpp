// https://leetcode.com/problems/unique-binary-search-trees/submissions/
class Solution {
public:
    
    int numTrees(int n) {
        int num[100000];
        num[0]=1;
        num[1]=1;
        num[2]=2;
        for(int i=3;i<=n;i++)
        {
            num[i]=0;
            for(int j=0;j<=i-1;j++)
            {
                num[i]+= num[j]*num[i-j-1];
            }
        }
        
        return num[n];
        
        
        
    }
};