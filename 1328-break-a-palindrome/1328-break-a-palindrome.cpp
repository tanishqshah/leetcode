class Solution {
public:

    bool isPalindrome(string s)
    {
        int i = 0 , j = s.size() - 1;
        while(i < j )
        {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }

        return true;
    }
    string breakPalindrome(string palindrome) {
        for(int i = 0 ; i  < palindrome.size() ; i ++)
        {
            if(palindrome[i] != 'a')
             {
                 char c = palindrome[i];
                 palindrome[i] = 'a';
                 if(!isPalindrome(palindrome))    
                 return palindrome;
                 palindrome[i] = c;
             }

        }
        if(palindrome[palindrome.size() - 1] == 'a')
        {
            palindrome[palindrome.size() - 1] = 'b';
            if(isPalindrome ( palindrome))
               return "";
            return palindrome;
        }

        return "";

    }
};