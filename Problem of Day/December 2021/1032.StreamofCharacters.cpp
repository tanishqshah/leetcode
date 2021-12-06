https://leetcode.com/problems/stream-of-characters/


class StreamChecker {
public:
    struct node
    {
        node*child[26]={NULL};
        int end=0;
    };
    node*root=new node();
    string ans;
    int max_len_word=0;
    void insert(string &s)
    {
        node*curr=root;
        for(int i=s.size()-1;i>=0;i--)
        {
            int index=s[i]-97;
            if(curr->child[index]==NULL)
            {
                curr->child[index]=new node();
            }
            curr=curr->child[index];
        }
        curr->end=1;
    }
    StreamChecker(vector<string>& words) 
    {
        for(int i=0;i<words.size();i++)
        {
            max_len_word=max(max_len_word,(int)words.size());
            insert(words[i]);
        }
    }
    bool find(string &s)
    {
        node*curr=root;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            int index=s[i]-97;
             curr=curr->child[index];
            if(curr==NULL)
            {
                return false;
            }
            if(curr->end)
            {
                return true;
            }
        }
        return false;
    }
    bool query(char letter) {
        ans.push_back(letter);
        if(find(ans))
        {
            return true;
        }
        return false;
    }
};
