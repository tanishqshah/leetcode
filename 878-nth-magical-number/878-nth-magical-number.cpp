class Solution {
public:
    const int MOD = 1e9+7;
    int nthMagicalNumber(int N, int A, int B) {
        long L = lcm(A, B), C = (L/A) + (L/B) - 1, k = (N-1) / C, ans = 0;
        for(int i = 1, j = 1, magicalNeeded = N - k*C; magicalNeeded; magicalNeeded--) 
            if(A*i < B*j) ans = A * i++;
            else ans = B * j++;

        return (k*L + ans) % MOD;
    }
};