class Solution {
public:
    TreeNode* minval(TreeNode* root){
        TreeNode* temp=root;
        if(root){
            while(temp->left){
                temp=temp->left;
            }
        }
        return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }
        if(root->val==key){
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            else if(root->left==NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            else{
                int mini=minval(root->right)->val;
                root->val=mini;
                root->right=deleteNode(root->right,mini);
                return root;
            }
        }
        else if(key>root->val){
            root->right=deleteNode(root->right,key);
            return root;
        }
        else{
            root->left=deleteNode(root->left,key);
            return root;
        }
    }
};