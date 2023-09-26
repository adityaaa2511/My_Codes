#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};
int solve(Node* node){
    if(node==NULL){
        return 0;
    }
    int s1=solve(node->left);
    int s2=solve(node->right);
    int sum=s1+s2;
    sum+=node->key;
    return sum;
}
int sumBT(Node* root){
    // Code here
    int sum=0;
    sum=solve(root);
    return sum;    
}