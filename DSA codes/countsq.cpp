class Solution{
  public:
    int countSquares(int N) {
        // code here
        double n=pow(N,0.5);
        double rem=remainder(n,1.0);
        if(rem==0){
            n=n/1;
            return n-1;
        }
        else{
            n=n/1;
            return n;
        }
    }
};