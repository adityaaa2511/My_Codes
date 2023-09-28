class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int a[n+1]={};
        vector<int>b;
        for(int i=0;i<n;i++){
            a[arr[i]]++;
            if(a[arr[i]]==2){
                b.push_back(arr[i]);
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i]==0){
                b.push_back(i);
            }    
        }
        return b;
    }
};