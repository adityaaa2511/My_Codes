class Solution {
    public:
        pair<int,int>diameterop(Node* node){
            if(node==NULL){
                pair<int,int>p=make_pair(0,0);
                return p;
            }
            pair<int,int>left=diameterop(node->left);
            pair<int,int>right=diameterop(node->right);
            
            int op1=left.first;
            int op2=right.first;
            int op3=left.second+right.second+1;
            
            pair<int,int>ans;
            ans.first=max(op3,max(op1,op2));
            ans.second=max(left.second,right.second)+1;
            
            return ans;
        }

    // Function to return the diameter of a Binary Tree
    public:
        int diameter(Node* root) {
            // Your code here
            return diameterop(root).first;
        }

};