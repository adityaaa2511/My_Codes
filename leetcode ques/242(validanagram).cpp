class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1,m2;
        for(int i=0;i<s.size();i++){
            if(!m1.count(s[i])){
                m1[s[i]]=1;
            }
            else{
                m1[s[i]]++;
            }
        }
        for(int i=0;i<t.size();i++){
            if(!m2.count(t[i])){
                m2[t[i]]=1;
            }
            else{
                m2[t[i]]++;
            }
        }
        for(auto x:m1){
            if(!m2.count(x.first)){
                return false;
            }
            else{
                if(x.second!=m2[x.first]){
                    return false;
                }
            }
        }
        for(auto x:m2){
            if(!m1.count(x.first)){
                return false;
            }
            else{
                if(x.second!=m1[x.first]){
                    return false;
                }
            }
        }
        return true;
    }
};