// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{   
public:
    string findsum(string s1,string s2){
        string str="";
        int n1=s1.length()-1;
        int n2=s2.length()-1;
        int carry=0;
        while(n1>=0 || n2>=0 || carry){
            int sum=0;
            if(n1>=0)
                sum=sum+(s1[n1--]-'0');
            if(n2>=0)
                sum=sum+(s2[n2--]-'0');
            sum=sum+carry;
            carry=sum/10;
            sum=sum%10;
            str=to_string(sum)+str;
        }
        return str;
    }
    string solve(int arr[], int n) {
        string n1="";
        string n2="";
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(i%2==0)
                if(n1.length()==0 && arr[i]==0){
                }
                else
                    n1=n1+to_string(arr[i]);
            else
                if(n2.length()==0 && arr[i]==0){
                }
                else
                    n2=n2+to_string(arr[i]);
        }
        string ans=findsum(n1,n2);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends