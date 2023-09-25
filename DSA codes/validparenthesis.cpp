class Solution
{
    public:
    bool solve(string s){
        stack<char>stk;
        for(int i=0;i<s.size();i++){
            if(stk.empty()){
                stk.push(s[i]);
            }
            else if(stk.top()=='(' && s[i]==')'|| stk.top()=='{' && s[i]=='}'|| stk.top()=='[' && s[i]==']'){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        if(stk.empty()){
            return true;    
        }
        return false;
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        bool ans=solve(x);
        return ans;
    }
};