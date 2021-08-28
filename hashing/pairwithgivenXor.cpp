// Problem Description
// Given an 1D integer array A containing N distinct integers.
// Find the number of unique pairs of integers in the array whose XOR is equal to B.
// NOTE:
// Pair (a, b) and (b, a) is considered to be same and should be counted once.
// Problem Constraints
// 1 <= N <= 105
// 1 <= A[i], B <= 107
// Input Format
// First argument is an 1D integer array A.
// Second argument is an integer B.
// Output Format
// Return a single integer denoting the number of unique pairs of integers in the array A whose XOR is equal to B.
// Example Input
// Input 1:
//  A = [5, 4, 10, 15, 7, 6]
//  B = 5
// Input 2:
//  A = [3, 6, 8, 10, 15, 50]
//  B = 5
// Example Output
// Output 1:
//  1
// Output 2:
//  2
// Example Explanation
// Explanation 1:
// (10 ^ 15) = 5
// Explanation 2:
// (3 ^ 6) = 5 and (10 ^ 15) = 5 
// Note:You only need to implement the given function. Do not read input, instead use the arguments to the function. Do not print the output, instead return values as specified. Still have a doubt? Checkout Sample Codes for more details.


int Solution::solve(vector<int> &A, int B) {
    map<int,int>mp;
    for(int i=0;i<A.size();i++){
	    mp[A[i]]=1;
    }
    int count = 0;
    for(int i=0;i<A.size();i++){
	    int required=A[i]^B;
	    if(mp.find(required)!=mp.end()){
		    count++;
	    }
    }
    return count/2;
}
