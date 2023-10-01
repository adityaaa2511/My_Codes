class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node* node){
        if(node==NULL){
            return 0;
        }
        int val=node->data;
        int left=solve(node->left);
        int right=solve(node->right);
        
        node->data=left+right;
        return node->data+val;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }
};