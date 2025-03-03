class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp;
        int rightPointer=0;
        int maxLength=0;
        for(int leftPointer=0;leftPointer<s.length();leftPointer++){
            mp[s[leftPointer]]++;
            while(mp[s[leftPointer]]>1){
                mp[s[rightPointer]]--;
                rightPointer++;
            }
            maxLength = max(maxLength,leftPointer-rightPointer+1);
        }
        return maxLength;
    }
};