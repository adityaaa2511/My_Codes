class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==true){
                nums[i]=1e9;
            }
            else{
                mp[nums[i]]=true;
            }
        }
        sort(nums.begin(),nums.end());
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            if(val!=1e9){
                int target=val+nums.size()-1;
                int idx=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
                idx--;
                maxlen=max(maxlen,idx-i+1);
            }
        }
        return nums.size()-maxlen;
    }
};