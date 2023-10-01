lass Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    pair <int,int> solve(Node* root){
        if(root==NULL){
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        pair<int,int>left=solve(root->left);
        pair<int,int>right=solve(root->right);
        
        pair<int,int>p;
        p.first=root->data+left.second+right.second;
        p.second=max(left.first,left.second)+max(right.first,right.second);
        
        return p;
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int>ans=solve(root);
        return max(ans.first,ans.second);
    }
};