// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int>ans;
            int n = pat.size();
            char x = pat[0];
            for(int i=0 ;i<txt.size()-n+1;i++){
                if(txt[i] == x){
                    string temp = txt.substr(i,n);
                    
                    if(temp == pat){
                        ans.push_back(i+1);
                    }
                }
            }
            if(ans.size()==0)
                return {-1};
            return ans;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends