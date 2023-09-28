char* reverse(char *S, int len)
{
    //code here
    stack<char>stk;
    for(int i=0;i<len;i++){
        stk.push(S[i]);
    }
    char *x= new char[len];
    int i=0;
    while(!stk.empty()){
        x[i]=stk.top();
        stk.pop();
        i++;
    }
    x[i]='\0';
    return x;
}