class Solution {
public:
    string countOfAtoms(string formula) {
        stack<unordered_map<string, int>> stk;
        stk.push({}); // Initialize with an empty map
        
        int i = 0, n = formula.length();
        
        while (i < n) {
            if (formula[i] == '(') {
                stk.push({});
                i++;
            } else if (formula[i] == ')') {
                unordered_map<string, int> top = stk.top();
                stk.pop();
                i++;
                int start = i;
                while (i < n && isdigit(formula[i])) {
                    i++;
                }
                int multiplier = start < i ? stoi(formula.substr(start, i - start)) : 1;
                for (auto& kv : top) {
                    stk.top()[kv.first] += kv.second * multiplier;
                }
            } else {
                int start = i++;
                while (i < n && islower(formula[i])) {
                    i++;
                }
                string element = formula.substr(start, i - start);
                start = i;
                while (i < n && isdigit(formula[i])) {
                    i++;
                }
                int count = start < i ? stoi(formula.substr(start, i - start)) : 1;
                stk.top()[element] += count;
            }
        }
        
        unordered_map<string, int> result = stk.top();
        vector<string> elements;
        for (auto& kv : result) {
            elements.push_back(kv.first);
        }
        sort(elements.begin(), elements.end());
        
        string res;
        for (const auto& element : elements) {
            res += element;
            if (result[element] > 1) {
                res += to_string(result[element]);
            }
        }
        
        return res;
    }
};