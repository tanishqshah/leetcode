class Solution {
public:

    // Function to check whether the character is a number or not
    bool isNum(char c) {
        return c <= '9'  &&  c >= '0';
    }


    // DP Table
    vector<int> dp[21][21];

    vector<int> solve(int i, int j, string &exp) {
        // if number is of single digit
        if (j == i) return {exp[i] - '0'};

        // if number is of double digit
        if (j - i <= 1  &&  isNum(exp[i])  &&  isNum(exp[j]))  return {((exp[i] - '0') * 10) + (exp[j] - '0')};
        

        // if result is already calculated
        if (dp[i][j].size() > 0) return dp[i][j];

        vector<int> posAns;


        // making cuts at every symbol
        for (int k = i + 1; k < j; k++) {

            // skipping iteration if char at current index is a number
            if (isNum(exp[k])) continue;


            // solution at left and right side of current symbol
            auto leftSolution = solve(i, k - 1, exp);
            auto rightSolution = solve(k + 1, j, exp);

            // calculating all possible combinations of right and left solutions
            for (int x: leftSolution) {
                for (int y: rightSolution) {
                    switch(exp[k]) {
                        case '*':
                            posAns.push_back(x * y);
                        break;
                        case '-':
                            posAns.push_back(x - y);
                        break;
                        case '+':
                            posAns.push_back(x + y);
                        break;
                    }
                }
            }
        }

        // returning and storing the answer for future use
        return dp[i][j] = posAns;
    }

    vector<int> diffWaysToCompute(string expression) {
        return solve(0, expression.size() - 1, expression);
    }
};