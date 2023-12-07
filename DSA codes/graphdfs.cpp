class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int i,vector<int>adj[],int V,unordered_map<int,bool> &visited,vector<int> &ans){
        if(visited[i]){
            return;
        }
        visited[i]=true;
        ans.push_back(i);
        for(auto j:adj[i]){
            if(!visited[j]){
                dfs(j,adj,V,visited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code herelass Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int i,vector<int>adj[],int V,unordered_map<int,bool> &visited,vector<int> &ans){
        if(visited[i]){
            return;
        }
        visited[i]=true;
        ans.push_back(i);
        for(auto j:adj[i]){
            if(!visited[j]){
                dfs(j,adj,V,visited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool>visited;
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,V,visited,ans);
            }
        }
        return ans;
    }
};lass Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int i,vector<int>adj[],int V,unordered_map<int,bool> &visited,vector<int> &ans){
        if(visited[i]){
            return;
        }
        visited[i]=true;
        ans.push_back(i);
        for(auto j:adj[i]){
            if(!visited[j]){
                dfs(j,adj,V,visited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool>visited;
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,V,visited,ans);
            }
        }
        return ans;
    }
};lass Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int i,vector<int>adj[],int V,unordered_map<int,bool> &visited,vector<int> &ans){
        if(visited[i]){
            return;
        }
        visited[i]=true;
        ans.push_back(i);
        for(auto j:adj[i]){
            if(!visited[j]){
                dfs(j,adj,V,visited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool>visited;
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,V,visited,ans);
            }
        }
        return ans;
    }
};lass Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int i,vector<int>adj[],int V,unordered_map<int,bool> &visited,vector<int> &ans){
        if(visited[i]){
            return;
        }
        visited[i]=true;
        ans.push_back(i);
        for(auto j:adj[i]){
            if(!visited[j]){
                dfs(j,adj,V,visited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool>visited;
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,V,visited,ans);
            }
        }
        return ans;
    }
};
        unordered_map<int,bool>visited;
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,V,visited,ans);
            }
        }
        return ans;
    }
};