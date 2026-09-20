class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        vector<bool>visited(n, false); 
        for(auto x : edges){
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return dfs(adj, source, destination, visited);
    }

    bool dfs(vector<vector<int>>&adj, int source, int destination, vector<bool>&visited){
        if(source == destination) return true;
        visited[source] = true;
        for(auto x : adj[source]){
            if(!visited[x] && dfs(adj, x, destination, visited)) return true;
        }
        return false;
    }
};
