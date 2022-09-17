class Solution {
public:
    map<string,bool> sm; // to store calculated string and if it is palindrome or not
    bool pal(string &s){
        if(sm.find(s) != sm.end()) return sm[s];
        int n = s.length();
        if(n == 0) return sm[s] = true;
        for(int i = 0;i <= n/2;i++){
            if( s[i] != s[(n - i) - 1] ) return sm[s] = false;
        }
        return sm[s] = true;
    }
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> ans; // to store answer
        unordered_map<string,int> m; // unordered map is used because its search time is O(1) for avg case 
        for(int i=0;i<words.size();i++){
            string s = words[i];
            reverse(s.begin(),s.end());
            m[s] = i; // storing reverse strings in map
        }
		// if we have empty string in given words then for this we only check if words have palindrome words in it and insert that pair in ans
        if(m.find("") != m.end()) {
            for(int i = 0; i < words.size(); i++) {
                if(i == m[""]) continue;
                if(pal(words[i])){ ans.push_back({i, m[""]});}
            }
        }
		// Now traversing words in words 
        for(int i=0;i<words.size();i++){
			// storing i'th word in r and initializing l as empty string
            string r = words[i];
            string l = "";
			// Now traversing i'th word ans poping start character from r and pushing it to l and checking 
			// if we can find that in map and also if l or r is palindrome and final check is that if found then 
			// must not have same index so after these checks we can add those index to answer
            for(int j = 0; j < words[i].length() ; j++){
                l.push_back(words[i][j]);
                r.erase(0,1);
                if(m.find(l) != m.end() && pal(r) && m[l] != i) ans.push_back({i, m[l]});
                if(m.find(r) != m.end() && pal(l) && m[r] != i) ans.push_back({m[r], i});
            }
        }
        return ans;
    }
};