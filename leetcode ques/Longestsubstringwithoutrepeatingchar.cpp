class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,cnt=0;
        unordered_set<int> lol;
        while(j<s.size()){
            if(!lol.count(s[j])){
                lol.insert(s[j]);
                cnt=max(cnt,j-i+1);
            }
            else{
                while(lol.count(s[j])){
                    lol.erase(s[i]);
                    i++;
                }
                lol.insert(s[j]);
                cnt=max(cnt,j-i+1);
            }
            j++;
        }
        return cnt;
    }
};