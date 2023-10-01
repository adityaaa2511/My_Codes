class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q){
            return root;
        }
        
        TreeNode *leftAns = lowestCommonAncestor(root->left, p, q);
        TreeNode *rightAns = lowestCommonAncestor(root->right, p, q);

        if(leftAns != NULL && rightAns != NULL){
            return root;
        }
        else if(leftAns != NULL && rightAns == NULL){
            return leftAns;
        }
        return rightAns;
    }
};