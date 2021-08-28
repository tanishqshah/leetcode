// Problem Description
// Given a string A consisting of lowercase characters.
// Check if characters of the given string can be rearranged to form a palindrome.
// Return 1 if it is possible to rearrange the characters of the string A such that it becomes a palindrome else return 0.
// Problem Constraints
// 1 <= |A| <= 105
// A consists only of lower-case characters.
// Input Format
// First argument is an string A.
// Output Format
// Return 1 if it is possible to rearrange the characters of the string A such that it becomes a palindrome else return 0.
// Example Input
// Input 1:
//  A = "abcde"
// Input 2:
//  A = "abbaee"
// Example Output
// Output 1:
//  0
// Output 2:
//  1
// Example Explanation
// Explanation 1:
//  No possible rearrangement to make the string palindrome.
// Explanation 2:
//  Given string "abbaee" can be rearranged to "aebbea" to form a palindrome.
// Note:You only need to implement the given function. Do not read input, instead use the arguments to the function. Do not print the output, instead return values as specified. Still have a doubt? Checkout Sample Codes for more details.


int Solution::solve(string A) {
    unordered_map<char,int>mp;
    int n=A.size();
    int count=0;
    for(int i=0;i<n;i++){
        mp[A[i]-'a']++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
    if((it->second%2)!=0)
        count++;
    }
    if(count>1)
        return 0;
    else 
        return 1;

}
