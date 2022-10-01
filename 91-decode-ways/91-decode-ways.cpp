class Solution {
public:
    int nums(string s, int index,int arr[]){
        int num=s[index]-'0';
        if(index==s.length())
            return 1;
        if(s[index]=='0')
            return 0;
        if(index==s.length()-1)
            return 1;
        if(arr[index]>0)
            return arr[index];
        int count1=nums(s, index+1, arr);
        int count2=0;
         if(index+2<=s.length()&&s.substr(index, 2)<="26"){
             count2=nums(s, index+2, arr);
         }
        arr[index]=count1+count2;
        return count1+count2;
    }
    
    
    int numDecodings(string s) {
        if(s[0]=='0' || !s.size())
            return 0;
        int *arr= new int[s.length()+1];
        return nums(s,0, arr);
        
    }
	
};