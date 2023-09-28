bool findPair(int arr[], int size, int n){
    //code
    unordered_set<int>s;
    for(int i=0;i<size;i++){
        if(s.find(arr[i]+n)!=s.end()||s.find(arr[i]-n)!=s.end()){
            return 1;
        }
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
        }
    }
    return 0;
}