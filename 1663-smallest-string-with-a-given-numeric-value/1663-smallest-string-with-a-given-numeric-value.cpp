class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string ans = "";
        for(int i=0;i<n;i++){
        int maxbound = (n-1-i)*26;
        if(maxbound<k)
        {
            ans.push_back(char(k-maxbound+96));
            k = maxbound;  
        }
        else{
            ans.push_back('a');
            k = k-1;
        }
        
    }
   
    return ans;
    }
};