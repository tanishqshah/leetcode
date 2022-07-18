class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(min>piles[i])
                min=piles[i];
            if(max<piles[i])
                max=piles[i];
        }
        int low=1;
        int high=max;
        int mid;
        while(low<high){
            mid=low+high;
            mid=mid/2;
            int ans=0;
            for(int i=0;i<piles.size();i++){
                if(piles[i]%mid!=0){
                    ans++;
                }
                ans=ans+piles[i]/mid;
            }
            if(ans>h)
                low=mid+1;
            else
                high=mid;
            
        }
        return low;
    }
};