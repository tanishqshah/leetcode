class MyHashMap {
public:
    unordered_map<int,int>mp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end())
            return mp[key];
        else
            return -1;
    }
    
    void remove(int key) {
        mp.erase(key);
        
    }
    
};
