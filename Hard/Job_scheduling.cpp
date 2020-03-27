// https://leetcode.com/problems/course-schedule-ii/submissions/

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> v(numCourses);
        // v[0].push_back(5);
        for(int i=0;i<prerequisites.size();i++)
        { v[prerequisites[i][0]].push_back(prerequisites[i][1]);
         }
        // vector<int> o;
        
        vector<int> vis(numCourses,0);// adress
        vector<int> vis1(numCourses,0); //normal
        // vector<int> o;
        vector<int> o(numCourses+1,0);
        vector<int> ot;
        for(int i=0;i<numCourses;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,v,vis,vis1,o,ot,numCourses);
            }
            if(o[numCourses]==-1){return {};}
        }
        
        // for(auto i=o.begin();i!=o.end();i++){ot.push_back(*i);}
        return ot;
        
    }
    
    void dfs(int u,vector<vector<int>> v,vector<int> &vis,vector<int> vis1,vector<int> &o,vector<int> &ot,int n)
    {
        if(o[n]==-1){return ;}
        if(vis[u]==1){return ;}
        
        vis[u]=1;
        vis1[u]=1;
        for(int i=0;i<v[u].size();i++)
        {
            if(vis1[v[u][i]]==0)
            {
                dfs(v[u][i],v,vis,vis1,o,ot,n);
            }
            else
            {
                o[n]=-1;return;
            }
        }
        if(o[u]==0)
        {ot.push_back(u);
        o[u]=1;}
       
    }
    
    
};