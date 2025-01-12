class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.length()%2!=0)
            return false;
        stack<int>unlockedIndices;
        stack<int>openIndices;
        for(int i=0;i<s.length();i++){
            if(locked[i]=='0')
                unlockedIndices.push(i);
            else if(s[i]=='(')
                openIndices.push(i);
            else if(s[i]==')')
            {
                if(!openIndices.empty()){
                    openIndices.pop();
                }
                else if(!unlockedIndices.empty()){
                    unlockedIndices.pop();
                }
                else
                    return false;
            }
        }

        while(!openIndices.empty() && !unlockedIndices.empty() && openIndices.top()<unlockedIndices.top()){
            openIndices.pop();
            unlockedIndices.pop();
        }

        if(openIndices.empty() && !unlockedIndices.empty()){
            return unlockedIndices.size()%2==0;
        }

        return openIndices.empty();
        
    }
};