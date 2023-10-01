lass Solution
{
    public:
    pair <char,int> solve(Node* root){
        if(root==NULL){
            pair<char,int>p=make_pair(true,0);
            return p;
        }
        pair<char,int> left=solve(root->left);
        pair<char,int> right=solve(root->right);
        
        if(left.first && right.first && left.second==0 && right.second==0){
            pair<char,int>p=make_pair(true,root->data);
            return p;
        }
        else if(left.first && right.first && left.second==0){
            if(root->data==right.second){
                pair<char,int>p=make_pair(true,right.second+root->data);
                return p;
            } 
            else{
                pair<char,int>p=make_pair(false,right.second+root->data);
                return p;
            }
        }
        else if(left.first && right.first && right.second==0){
            if(root->data==left.second){
                pair<char,int>p=make_pair(true,left.second+root->data);
                return p;
            } 
            else{
                pair<char,int>p=make_pair(false,left.second+root->data);
                return p;
            }
        }
        else if(left.first && right.first){
            if(root->data==left.second+right.second){
                pair<char,int>p=make_pair(true,root->data+left.second+right.second);
                return p;
            }
            else{
                pair<char,int>p=make_pair(false,left.second+right.second+root->data);
                return p;
            }
        }
        else{
                pair<char,int>p=make_pair(false,0);
                return p;    
        }
    }
    bool isSumTree(Node* root)
    {
        // Your code here
        pair<char,int>ans=solve(root);
        return ans.first;
        
    }
};