class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing=true,flg=true,ans=true;
        for(int i=1;i<nums.size();i++){
            if(flg && nums[i]!=nums[i-1]){
                if(nums[i]<nums[i-1]){
                    increasing=false;
                    flg=false;
                }
                else if(nums[i]>nums[i-1]){
                    increasing=true;
                    flg=false;
                }
            }
            else{
                if(nums[i]>nums[i-1]){
                    if(!increasing){
                        ans=false;
                    }
                }
                else if(nums[i]<nums[i-1]){
                    if(increasing){
                        ans=false;
                    }
                }
            }
        }
        return ans;
    }
};