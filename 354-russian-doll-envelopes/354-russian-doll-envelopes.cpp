bool compare(vector<int> &i, vector<int> &j) { 
    if(i[0] < j[0]) return true;
    else if(i[0] == j[0] && i[1] > j[1]) return true;
    else return false;
}

class Solution {
public:
    
    int arr[100001][2];
    
    int lower_bound(int start, int end, int target){
        while(start<end){
            int mid = (start + end) /2;    
            
            if(target <= arr[mid][1]){
                end = mid;
            } else{
                start = mid+1;
            }
        }
        
        return start;
    }
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        sort(envelopes.begin(), envelopes.end(), compare);
        
        int arr_cnt = 1;
        arr[0][0] = envelopes[0][0];
        arr[0][1] = envelopes[0][1];
        
        for(int i=1;i<envelopes.size();i++){
            int idx = lower_bound(0, arr_cnt, envelopes[i][1]);
            arr[idx][0] = envelopes[i][0];
            arr[idx][1] = envelopes[i][1];
            // cout << idx << endl;
            if(idx >= arr_cnt) arr_cnt++;
        }

        return arr_cnt;
    }
};