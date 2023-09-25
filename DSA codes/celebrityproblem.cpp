class Solution 
{
    public:
    bool knows(vector<vector<int>> &M,int n,int x,int y){
        if(M[x][y]==1){
            return true;
        }
        else{
            return false;
        }
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            if(knows(M,n,x,y)){
                s.push(y);
            }
            else{
                s.push(x);
            }
        }
        int ans=s.top();
        bool rowcheck=true;
        for(int j=0;j<n;j++){
            if(M[ans][j]==1){
                rowcheck=false;
            }
        }
        bool columncheck=true;
        for(int i=0;i<n;i++){
            if(i!=ans && M[i][ans]==0){
                columncheck=false;
            }
        }
        if(rowcheck && columncheck){
            return ans;
        }
        else{
            return -1;
        }
        
    }
};