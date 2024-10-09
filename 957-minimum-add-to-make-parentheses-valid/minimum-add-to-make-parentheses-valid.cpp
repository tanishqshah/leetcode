class Solution {
public:
    int minAddToMakeValid(string s) {
        string stck;
        for (auto c : s) {
            if (stck.empty())
                stck.push_back(c);

            else if (stck.back() == '(' && c == ')') {
                stck.pop_back();
            } else {
                stck.push_back(c);
            }
        }
        return stck.size();
    }
};