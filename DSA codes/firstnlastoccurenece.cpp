class Solution
{
    public:
    int left(int arr[],int n,int x){
        int i=0;
        int j=n-1;
        int res=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]>x){
                j=mid-1;
            }
            else if(arr[mid]<x){
                i=mid+1;
            }
            else{
                res=mid;
                j=mid-1;
            }
        }
        return res;
    }
    int right(int arr[],int n,int x){
        int i=0;
        int j=n-1;
        int res=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]>x){
                j=mid-1;
            }
            else if(arr[mid]<x){
                i=mid+1;
            }
            else{
                res=mid;
                i=mid+1;
            }
        }
        return res;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>v;
        int a=left(arr,n,x);
        int b=right(arr,n,x);
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};