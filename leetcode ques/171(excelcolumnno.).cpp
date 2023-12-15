class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size(),ans=0;
        long long x=1;
        for(int i=n-1;i>=0;i--){
            ans+=(columnTitle[i]-64)*x;
            x=x*26;
        }
        return ans;
    }
};