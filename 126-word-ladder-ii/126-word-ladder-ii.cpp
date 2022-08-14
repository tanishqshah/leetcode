class Solution {
public:
    void findAllPath(vector<vector<string>> &res, string currentWord, string beginWord, unordered_map<string, vector<string>> &parents, vector<string> path) {
        if(currentWord == beginWord) {
            path.push_back(beginWord);
            reverse(path.begin(), path.end());
            res.push_back(path);
            return;
        }
        for(auto word: parents[currentWord]) {
            path.push_back(currentWord);
            findAllPath(res, word, beginWord, parents, path);
            path.pop_back();
        }
    }
    
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string, bool> wordMap;
        unordered_map<string, vector<string>> parents;
        unordered_map<string, int> levels;
        for(auto word: wordList) {
            wordMap[word] = true;
        }
        queue<string> q;
        q.push(beginWord);
        int level = 0;
        levels[beginWord] = 0;
        while(!q.empty()) {
            string s = q.front();
            q.pop();
            for(int i=0; i<s.size(); i++) {
                string temp = s;
                for(char c='a'; c<='z'; c++) {
                    if(s[i] != c) {
                        temp[i] = c;
                        if(wordMap.count(temp) && (levels[temp] == 0 || levels[temp] > levels[s] + 1)) {
                            q.push(temp);
                            parents[temp].clear();
                            parents[temp].push_back(s);
                            levels[temp] = levels[s] + 1;
                        } else if(wordMap.count(temp) && levels[temp] == levels[s] + 1) {
                            parents[temp].push_back(s);
                        }
                    }
                }
            }
            level++;
        }
        vector<vector<string>> res;
        vector<string> path;
        findAllPath(res, endWord, beginWord, parents, path);
        return res;
    }
};