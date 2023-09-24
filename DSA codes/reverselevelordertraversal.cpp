vector<int> reverseLevelOrder(Node *root)
{
    // code here
    stack<Node*>s;
    queue<Node*>q;
    vector<int>v;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        s.push(temp);
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
    }
    while(!s.empty()){
        Node* temp=s.top();
        s.pop();
        v.push_back(temp->data);
    }
    return v;
}