class MyHashSet {
public:
    vector<bool>mp;
    MyHashSet() : mp(1000001) {}
    
    void add(int key) {
        mp[key]=true;
    }
    
    void remove(int key) {
        mp[key]=false;
        
    }
    
    bool contains(int key) {
        return mp[key];
    }
};