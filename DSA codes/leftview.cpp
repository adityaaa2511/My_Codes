int max_level=0;
void leftview(vector<int>& v, Node* node, int level){
    if(node==NULL){
        return;
    }
    if(max_level<level){
        v.push_back(node->data);
        max_level=level;
    }
    leftview(v,node->left,level+1);
    leftview(v,node->right,level+1);
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
    max_level=0;
    vector<int>vec;
    leftview(vec,root,1);
    return vec;
}
