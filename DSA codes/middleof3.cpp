class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int min=INT_MAX;
        int max=INT_MIN;
        if(A>B){
            min=B;
            max=A;
        }
        else if(A<B){
            min=A;
            max=B;
        }
        if(C>max){
            return max;
        }
        else if(C<min){
            return min;
        }
        else{
            return C;
        }
    }
};