// https://leetcode.com/problems/palindrome-partitioning-ii/submissions/
class Solution {
public:
    int minCut(string s) {
        
        int n=s.size();
        vector<vector<bool>> v(n,vector<bool>(n,0));
        
        for(int i=0;i<n;i++){v[i][i]=1;}
        
        for(int l=2;l<=n;l++)
        {
            for(int i=0;i<n-l+1;i++)
            {
                int j= i+l-1;
                // cout<<i<<" "<<j;
                if (l==2)
                {
                    // cout<<"S";
                    v[i][j] = (s[i]==s[j]);
                }
                
                else
                {
                    v[i][j] = (s[i]==s[j]) && (v[i+1][j-1]);
                }
            }
        }
        
        vector<int> a(n);
        a[0]=0;
        if (v[0][n-1]==1){return 0;}
        for(int i=1;i<n;i++)
        {
            if(v[0][i])
            {
                a[i]=0;
            }
            else
            {
                a[i]=a[i-1]+1;
                for(int j=1;j<i;j++)
                {
                    if(v[j][i]==1 && a[j-1]+1< a[i])
                    {
                        a[i]=a[j-1]+1;
                    }
                }
            }
        }
        return a[n-1];
        
        
        
        
    }
};