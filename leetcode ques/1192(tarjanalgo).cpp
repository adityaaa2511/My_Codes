class Solution {
public:
    void dfs(int node,int parent,int &timer,vector<int> &disc,vector<int> &low,unordered_map<int,bool> &vis,unordered_map<int,list<int>> &adj,vector<vector<int>> &result){
        vis[node]=true;
        low[node]=disc[node]=timer++;
        for(auto neigh:adj[node]){
            if(neigh==parent){
                continue;
            }
            if(!vis[neigh]){
                dfs(neigh,node,timer,disc,low,vis,adj,result);
                low[node]=min(low[node],low[neigh]);
                if(low[neigh]>disc[node]){
                    vector<int>ans;
                    ans.push_back(node);
                    ans.push_back(neigh);
                    result.push_back(ans);
                }
            }
            else{
                low[node]=min(low[node],disc[neigh]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        unordered_map<int,list<int>>adj;
        for(int i=0;i<connections.size();i++){
            int u=connections[i][0];
            int v=connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> disc(n,-1);
        vector<int> low(n,-1);
        unordered_map<int,bool>vis;
        vector<vector<int>>result;
        int timer=0,parent=-1;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,parent,timer,disc,low,vis,adj,result);
            }
        }
        return result;
    }
};