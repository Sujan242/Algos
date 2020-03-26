// https://leetcode.com/problems/jump-game-ii/submissions/

class Solution {
public:
    int jump(vector<int>& nums) {
        // vector<int> dp(nums.size(),0);
        // return help(nums,0,dp);
        int n=nums.size();
        if(n==1){return 0;}
        
        // for(int i=n-2;i>=0;i--)
        // {
        //     int mi=INT_MAX-1;
        //     for(int j=1;j<=nums[i];j++)
        //     {
        //         if(j+i>=n-1)
        //         {
        //             mi=0;break;
        //         }
        //         mi=min(mi,dp[j+i]);
        //     }
        //     dp[i]=1+mi;
        // }
        // return dp[0];
        int ans=1;
        int steps=nums[0];
        int mr=nums[0];
        for(int i=1;i<n-1;i++)
        {
            // if(i==n-1){break;}
            mr=max(mr,i+nums[i]);
            
            
            steps--;
            
            if(steps==0)
            {
                ans++;
                steps=mr-i;
            }
          
        }
        // cout<<ans<<steps;
        // if(steps==0){return ans-1;}
        return ans;
        
    }
    
    int help(vector<int> a,int i,vector<int>& dp)
    {
        if(i>=a.size()-1)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        int mi=INT_MAX;
        for(int j=1;j<=a[i];j++)
        {
            mi=min(mi,help(a,i+j,dp));
        }
        if(mi==INT_MAX)
        {
            return dp[i]=mi;
        }
        return dp[i]=1+mi;
        
    }
};