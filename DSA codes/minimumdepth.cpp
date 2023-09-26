#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

int minDepth(Node *root) {
        // Your code here
        if(root==NULL){
            return 0;
        }
        int d1=minDepth(root->left);
        int d2=minDepth(root->right);
        if(d1==0 || d2==0){
            return max(d1,d2)+1;
        }
        else{
            return min(d1,d2)+1; 
        }
        
}