class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
        unordered_map<string,string >m;
        for(int i=0;i<n;i++){
            m[paths[i][0]]=paths[i][1];
        }
        string s;
        for(auto x:m){
            if(!m.count(x.second)){
                s=x.second;
            }
        }
        return s;
    }
};