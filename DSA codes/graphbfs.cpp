class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        int s=0;
        vis[s]=true;
        vector<int>res;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
            int t=q.front();
            res.push_back(t);
            q.pop();
            for(auto v:adj[t]){lass Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        int s=0;
        vis[s]=true;
        vector<int>res;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
            int t=q.front();
            res.push_back(t);
            q.pop();
            for(auto v:adj[t]){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        return res;
    }
};lass Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        int s=0;
        vis[s]=true;
        vector<int>res;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
            int t=q.front();
            res.push_back(t);
            q.pop();
            for(auto v:adj[t]){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        return res;
    }
};lass Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        int s=0;
        vis[s]=true;
        vector<int>res;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
            int t=q.front();
            res.push_back(t);
            q.pop();
            for(auto v:adj[t]){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        return res;
    }
};
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        return res;
    }
};