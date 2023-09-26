#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

vector<int> printKthLevel(Node* root, int k){
    // your code goes here
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int cnt=0;
    vector<int>v;
    while(!q.empty()){
        Node* temp=q.front();
        if(temp==NULL){
            cnt++;
            q.pop();
            if(!q.empty()){
                q.push(NULL);    
            }
            if(cnt==k+1){
                return v;
            }
        }
        else{
            q.pop();
            if(cnt==k){
                v.push_back(temp->key);
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
   
}