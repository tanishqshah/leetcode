class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.empty())
            return true;
        return helper(s, t) && helper(t, s);
    }
    bool helper(string s, string t) {
    	unordered_map<char, char> m;
        for (auto i = 0; i != s.size(); ++i) {
            if (!m.count(s[i])) {
                m.insert({s[i], t[i]});
            }
        	else if (m[s[i]] != t[i])
                return false;
        }
        return true;
    }
};