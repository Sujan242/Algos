
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code here
    vis[s]=1;
    queue<int> q;
    q.push(s);
    while(q.size()>0)
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<adj[u].size();i++)
        {
            if (!vis[adj[u][i]])
            {
                q.push(adj[u][i]);
                vis[adj[u][i]]=1;
            }
        }
    }
    
}