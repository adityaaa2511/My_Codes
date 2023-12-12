class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<=(s.size()-1)/2;i++){
            char temp=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=temp;
        }
    }
}; 

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
}; //O(1) space