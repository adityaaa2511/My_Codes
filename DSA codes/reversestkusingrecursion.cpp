class Solution{
    public:
    void insertatbottom(stack<int>& S,int x){
        if(S.empty()){
            S.push(x);
        }
        else{
            int y=S.top();
            S.pop();
            insertatbottom(S,x);
            S.push(y);
        }
    }
    void reversestack(stack<int>& S){
        if(!S.empty()){
            int x=S.top();
            S.pop();
            reversestack(S);
            insertatbottom(S,x);
        }
        return;
    }
};