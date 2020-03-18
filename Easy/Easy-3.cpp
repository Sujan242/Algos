// Function to do DFS of graph
// *  g[]: array of vectors to represent graph
// *  vis[]: array to keep track of visited vertex
// */
void dfs(int s, vector<int> g[], bool vis[])
{
    
    // Your code here
    cout<<s<<" ";
    vis[s]=1;
    // cout<<g[s][2]<<" ";
    
    for(auto i=g[s].begin();i!=g[s].end();i++)
    {
        if(vis[*i]==0)
        {
            vis[*i]=1;
            dfs(*i,g,vis);
            
        }
    }

}