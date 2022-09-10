class Solution {
public:
    int helper(vector<int>& prices){
        int priceNow=prices[0], profit=0;
        for(auto &p : prices){
            if(p>priceNow) profit += p - priceNow;
            
            //update priceNow as we can buy before now as only 1 trans at a time
            priceNow = p;
        }
        return profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(k==0 or n==0) return 0;
        
        //if k >= n/2 means we have to buy and sell on consecutive days
        if(k >= n/2) return helper(prices);
        
        vector<int> bal(k+1, INT_MIN), pf(k+1, 0);
        for(int i=0;i<n;i++){
            
            //run for max non-simultaneous allowed trans
            //1 trans is 1 buy+sell
            
            for(int j=1;j<=k;j++){ 
                
                //max of buy or not buy
                //buy => pf till now/bal decreases
                bal[j] = max(pf[j-1]-prices[i], bal[j]);
                
                //max of sell or not sell
                //sell => pf till now/bal increases
                pf[j] = max(bal[j]+prices[i], pf[j]);
            }
        }
        return pf[k];
    }
};