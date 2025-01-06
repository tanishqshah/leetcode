class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>storeIndex;
        vector<int>ans(boxes.length(),0);
        for(int i=0;i<boxes.length();i++){
            if(boxes[i]=='1')
                storeIndex.push_back(i);
        }

        for(int i=0;i<boxes.size();i++){
            int sum=0;
            for(auto index : storeIndex){
                if(i!=index){
                    sum=sum+abs(index-i);
                }
            }
            ans[i]=sum;
        }
        return ans;
    }
};