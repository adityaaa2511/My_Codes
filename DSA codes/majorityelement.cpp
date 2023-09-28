class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int mod=1e6,res=-1;
        int arr[mod]={};
        for(int i=0;i<size;i++){
            arr[a[i]]++;
            if(arr[a[i]]>(size/2)){
                res=a[i];
            }
        }
        return res;
    }
};