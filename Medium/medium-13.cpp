// https://leetcode.com/problems/number-of-islands/submissions/

class Solution {
    
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if(n==0)
        {
            return 0;
        }
        int m=grid[0].size();
        int vis[1000][1000];
        
        
        memset(vis,0,sizeof(vis));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                    ans+=1;
                    queue<pair<int,int>> q;
                    q.push(make_pair(i,j));
                    vis[i][j]=1;
                    while(q.size()>0)
                    {
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        if(x>=1)
                        {
                            if(grid[x-1][y]=='1' && vis[x-1][y]==0)
                            {
                                q.push(make_pair(x-1,y));
                                vis[x-1][y]=1;
                            }
                        }
                         if(y>=1)
                        {
                            if(grid[x][y-1]=='1' && vis[x][y-1]==0)
                            {
                                q.push(make_pair(x,y-1));
                                vis[x][y-1]=1;
                            }
                        }
                        if(x<=n-2)
                        {
                            if(grid[x+1][y]=='1' && vis[x+1][y]==0)
                            {
                                q.push(make_pair(x+1,y));
                                vis[x+1][y]=1;
                            }
                        }
                         if(y<=m-2)
                        {
                            if(grid[x][y+1]=='1' && vis[x][y+1]==0)
                            {
                                q.push(make_pair(x,y+1));
                                vis[x][y+1]=1;
                            }
                        }
                        
                    }
                }
            }
        }
        
        
        
        return ans;
        
    }
};