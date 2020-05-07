// https://leetcode.com/submissions/detail/335599020/
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
        vector<vector<int>> v(k+1,vector<int>(prices.size(),0));
        if (prices.size()==0){return 0;}
        
        for(int i=1;i<=k;i++)
        {
            for(int j=1;j<prices.size();j++)
            {
                int ma=v[i][j-1];
                
                for(int k=j-1;k>=0;k--)
                {
                    ma=max(ma, prices[j] - prices[k] + v[i-1][k]);
                }
                v[i][j]=ma;
            }
        }
        return v[k][prices.size()-1];
        
    }
};