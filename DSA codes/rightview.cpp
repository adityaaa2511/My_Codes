void rightview(vector<int>& v,Node* node,int level){
    if(node==NULL){
        return;
    }
    if(level==v.size()){
        v.push_back(node->data);
    }
    rightview(v,node->right,level+1);
    rightview(v,node->left,level+1);
}
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>vec;
       rightview(vec,root,0);
       return vec;
    }
};