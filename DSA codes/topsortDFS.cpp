class Solution
{
	public:
	void topsort(int node,vector<int>adj[],unordered_map<int,bool> &visited,stack<int> &s){
	    visited[node]=1;
	    for(auto i:adj[node]){
	        if(!visited[i]){
	            topsort(i,adj,visited,s);
	        }
	    }
	    s.push(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    unordered_map<int,bool>visited;
	    stack<int>s;
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            topsort(i,adj,visited,s);
	        }
	    }
	    vector<int>ans;
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};