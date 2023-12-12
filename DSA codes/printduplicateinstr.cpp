class Solution{
public:
    void printdup(string S){
        unordered_map<char,int>freq;
        for(int i=0;i<S.size();i++){
            freq[S[i]]++;
        }
        unordered_map<char,int>::iterator itr;
        for(itr=S.begin();itr!=S.end();itr++){
            if(itr.second>1){
                cout<<itr.first<<itr.second<<endl;
            }
        }
    }
}