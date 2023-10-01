class Solution {
public:
    void solve(TreeNode* root,long long targetSum,long long &count,vector<long long> &path){
        if(root==NULL){
            return;
        }
        path.push_back(root->val);
        solve(root->left,targetSum,count,path);
        solve(root->right,targetSum,count,path);
        
        long long sum=0;
        for(long long i=path.size()-1;i>=0;i--){
            sum+=path[i];
            if(sum==targetSum){
                count++;
            }
        }
        path.pop_back();
    }
    long long pathSum(TreeNode* root, long long targetSum) {
        vector<long long>path;
        long long count=0;
        solve(root,targetSum,count,path);
        return count;
    }
};