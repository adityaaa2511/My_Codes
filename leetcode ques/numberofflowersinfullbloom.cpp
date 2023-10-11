class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>start,finish,ans;
        for(int i=0;i<flowers.size();i++){
            start.push_back(flowers[i][0]);
            finish.push_back(flowers[i][1]);
        }
        int cnt1=0,cnt2=0;
        sort(start.begin(),start.end());
        sort(finish.begin(),finish.end());
        int i=0,j=flowers.size()-1;
        for(int k=0;k<people.size();k++){
            int p=start.size()-(upper_bound(start.begin(),start.end(),people[k])-start.begin());
            int q=finish.size()-(lower_bound(finish.begin(),finish.end(),people[k])-finish.begin());
            ans.push_back(q-p);
        }
        return ans;
    }
};