class Solution {
public:
    string reverseWords(string s) {
        stack<int>stk;
        string x;
        for(char c:s){
            if(c!=' '){
                stk.push(c);
            }
            else{
                while(!stk.empty()){
                    x+=stk.top();
                    stk.pop();
                }
                x+=' ';
            }
        }
        while(!stk.empty()){
            x+=stk.top();
            stk.pop();
        }
        return x;
    }
};