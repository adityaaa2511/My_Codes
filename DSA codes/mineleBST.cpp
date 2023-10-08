Node* solve(Node* root){
    Node* temp=root;
    if(root){
        while(temp->left){
            temp=temp->left;
        }
    }
    return temp;
}
int minValue(Node* root) {
    // Code here
    Node* ans=solve(root);
    if(ans==NULL){
        return -1;
    }
    return ans->data;
}