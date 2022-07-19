class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = 0;
    int sumB = 0;
    
    for (auto e : A)
        sumA += e;
    
    for (auto e : B)
        sumB += e;
    
    int delta = (sumA - sumB) / 2;
    
    set<int> searchA;
    for (auto x : A)
    {
        searchA.insert(x);
    }
    
    
    for (auto y : B)    
    {
        if (searchA.count(delta + y) > 0)
        {
            return vector<int>{delta + y, y};
        }
    }
    return vector<int>();
    }
};