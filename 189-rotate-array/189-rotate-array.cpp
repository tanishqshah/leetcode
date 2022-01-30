class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int n=k%v.size();
        reverse(v.begin(), v.begin()+v.size()-n);
        reverse(v.begin()+v.size()-n, v.end());
        reverse(v.begin(), v.end());
    }
};