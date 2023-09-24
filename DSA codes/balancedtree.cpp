class Solution{
    public:
    pair<bool,int>balanced(Node* node){
        if(node==NULL){
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        pair<bool,int>left=balanced(node->left);
        pair<bool,int>right=balanced(node->right);
        
        pair<bool,int>ans;
        ans.second=max(left.second,right.second)+1;
        if(left.first && right.first && (abs(left.second-right.second)<=1)){
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        balanced(root).first;
    }
};