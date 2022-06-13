// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int isRepeat(string s)
	{
	    int n=s.length();
	    if(n==0 || n==1)
	        return 0;
	    string com="";
	   // com=com+s[0];
	    for(int i=0;i<=s.length()/2;i++){
	        com=com+s[i];
	        if(s.length()%com.length()==0){
	        string chk=com+com;
	        while(chk.length()<s.length())
	            chk.append(com);
	        if(s==chk)
	            return 1;
	        }
	    }
	    return 0;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends