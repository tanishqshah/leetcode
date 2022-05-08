class NestedIterator {
public:
    int i;
    vector<int>v;
    
     void putt(NestedInteger &x,vector<int>&v)
    {
        if(x.isInteger())
        {
            v.push_back(x.getInteger());
        }
        else{
            for(auto y:x.getList())
                putt(y,v);
            
        }
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        i=0;
        for(auto x:nestedList)
        {
            putt(x,v);
        }
    }
    
    int next() {
        return v[i++];
    }
    
    bool hasNext() {
        return i<v.size();
    }
   
};