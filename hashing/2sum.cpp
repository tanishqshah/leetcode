// Problem Description

// Given an array of integers, find two numbers such that they add up to a specific target number.

// The function twoSum should return indices of the two numbers such that they add up to the target, where index1 < index2. Please note that your returned answers (both index1 and index2 ) are not zero-based. Put both these numbers in order in an array and return the array from your function ( Looking at the function signature will make things clearer ). Note that, if no pair exists, return empty list.

// If multiple solutions exist, output the one where index2 is minimum. If there are multiple solutions with the minimum index2, choose the one with minimum index1 out of them.

// Input: [2, 7, 11, 15], target=9
// Output: index1 = 1, index2 = 2

METHOD 1
vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_set<int> st;
    vector<int>sol;
    int get,index;
    if(A.size() < 2)
        return sol;
    for(int i=0;i<A.size();i++)
    {
        int Ak = B-A[i];
        if (st.find(Ak) != st.end()) 
        {
            sol.push_back(i+1);
            get=A[i];
            index=i;
            break;
        }   
            
        st.insert(A[i]);
    }
    for(int i=0;i<A.size();i++)
    {
        if(B-get==A[i] && index!=i)
        {    
            sol.push_back(i+1);
            break;
        }
    }
    sort(sol.begin(),sol.end());
    return sol;
}





METHOD 2
  vector<int> Solution::twoSum(const vector<int> &A, int B) {
    int x=-1,y=-1;
    for(int i=2;i<=A.size();i++)
    for(int j=1;j<i;j++)
    {
        if((A[i-1]+A[j-1])==B)
        {
            x=j;
            y=i;
            vector<int> ans;
        if(x!=-1)
        {
        ans.push_back(x);
        ans.push_back(y);
        }
          return ans;  
        }
    }
    vector<int> ans;
    if(x!=-1)
    {
    ans.push_back(x);
    ans.push_back(y);
    }
    return ans;
    
}
