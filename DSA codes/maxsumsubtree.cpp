class Solution {
  public:
    // Function to find largest subtree sum.
    int solve(Node* root, int &ans){
        if(root==NULL){
            return 0;
        }
        int cursum=root->data+solve(root->left,ans)+solve(root->right,ans);
        ans=max(ans,cursum);
        return cursum;
    }
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        int ans=INT_MIN;
        solve(root,ans);
        return ans;
    }
};