class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int>s;
        vector<int>arr;
        for(int i=0;i<n;i++){
            if(s.find(a[i])==s.end()){
                s.insert(a[i]);
                arr.push_back(a[i]);
            }    
        }
        for(int i=0;i<m;i++){
            if(s.find(b[i])==s.end()){
                s.insert(b[i]);
                arr.push_back(b[i]);
            }    
        }
        return arr.size();
    }
};