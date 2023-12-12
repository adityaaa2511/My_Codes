class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
        for(int i=0;i<=(S.size()-1/2);i++){
            if(S[i]!=S[S.size()-i-1]){
                return 0;
            }
	    }
	    return 1;
	}

};