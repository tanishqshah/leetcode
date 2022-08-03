class MyCalendar {
public:
    set<pair<int,int>> s;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        if(s.size()==0){
            s.insert({start,end});
            return 1;
        }
        
        auto it = s.upper_bound({start,end});
        
        if(it==s.begin()){
            if(end<=(*it).first){
                s.insert({start,end});
                return 1;
            }
            else{
                return 0;
            }
        }
        
        if(it!=s.end()){
            if((*it).first<end){
                return 0;
            }
        }
        
        it--;
        
        if(start>=(*it).second){
            s.insert({start,end});
            return 1;
        }else{
            return 0;
        }
        
    }
};