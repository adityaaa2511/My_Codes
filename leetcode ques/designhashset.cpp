class MyHashSet {
public:
    vector<int>ms;
    MyHashSet() {
        int size=1e6+1;
        ms.resize(size);
        fill(ms.begin(),ms.end(),-1);
    }
    
    void add(int key) {
        ms[key]=key;
    }
    
    void remove(int key) {
        ms[key]=-1;
    }
    
    bool contains(int key) {
       if(ms[key]==-1){
           return false;
       } 
       else{
           return true;
       }
    }
};