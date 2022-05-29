class Solution {
public:
    int maxProduct(vector<string>& words) {
      
        int count=0;
        int n=words.size();
        int sum=0;
        int maxi=INT_MIN;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            string str=words[i];
            map<char,int> mp;
            for(int k=0;k<str.size();k++)
            mp[str[k]]++;
            for(int j=i+1;j<n;j++)
            {
                count=0;
                count1=0;
                string p=words[j];
                int flag=0;
                for(int c=0;c<p.size();c++)
                {
                    if(mp.find(p[c])==mp.end())
                        count++;
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag)
                    sum=0;
                else
                sum=(str.size()-count1) * (count);
                maxi=max(maxi,sum);

            }
        }
        return maxi;
    }
};