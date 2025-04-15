class Solution {
public:
    int longestSubstring(string s, int k) {
        unordered_map<int,int>freq;
        int left=0;
        int right=0;
        int n =s.length();
        for(auto i : s){
            freq[i]++;
        }
        int unique = freq.size();
        int answer=0;
        for(int i=1;i<=unique;i++){
            freq.clear();
            int count=0;
            int count_k=0;
            int end=0;
            int start=0;
            while(end<s.length()){
                if(count<=i){
                    int ind =s[end]-'a';
                    if(freq[ind]==0)
                        count++;
                    freq[ind]++;
                    if(freq[ind]==k)
                        count_k++;
                    end++;
                }
                else
                {
                    int ind = s[start]-'a';
                    if(freq[ind]==k)
                        count_k--;
                    freq[ind]--;
                    if(freq[ind]==0)
                        count--;
                    start++;
                }
                if(count==i && count_k==i){
                    answer=max(answer,end-start);
                }
            }
        }

        return answer;
    }
};