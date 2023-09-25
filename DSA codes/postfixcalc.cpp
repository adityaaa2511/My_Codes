class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>s;
        for(int i=0;i<S.size();i++){
            if(int(S[i])>=48 && int(S[i])<=57){
                s.push(S[i]-'0');
            }
            else if(S[i]=='+'){
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                int z=x+y;
                s.push(z);
            }
            else if(S[i]=='-'){
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                int z=y-x;
                s.push(z);
            }
            else if(S[i]=='*'){
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                int z=y*x;
                s.push(z);
            }
            else if(S[i]=='/'){
                int x=s.top();
                s.pop();
                int y=s.top();
                s.pop();
                int z=y/x;
                s.push(z);
            }
            
        }
        return s.top();
    }
};
