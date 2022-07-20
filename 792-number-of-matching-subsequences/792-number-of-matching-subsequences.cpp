class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0,k=s.size();
      unordered_map<string,int>mymap;
      for(int i=0;i<words.size();i++)
        mymap[words[i]]++;
      for(auto x:mymap)
      {
        int start1=0,start2=0;
        string p=x.first;
        int m=p.size();
        while(start1<k&&start2<m)
        {
          if(p[start2]==s[start1])
            start1++,start2++;
          else
            start1++;
        }if(start2==m)
          count+=x.second;
      }return count;
    }
};