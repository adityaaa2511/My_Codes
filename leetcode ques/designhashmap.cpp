class MyHashMap {
public:
    vector<int>mp;
    MyHashMap() {
        int size=1e6+1;
        mp.resize(size);
        fill(mp.begin(),mp.end(),-1);
    }
    
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
        return mp[key];
    }
    
    void remove(int key) {
        mp[key]=-1;
    }
};