class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1){
            return x;
        }
        int i=0,j=x,ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(((long)mid*mid<=x) && ((long)(mid+1)*(mid+1))>x){
                ans=mid;
                break;
            }
            else if(((long)mid*mid<x) && ((long)(mid+1)*(mid+1))<=x){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
};