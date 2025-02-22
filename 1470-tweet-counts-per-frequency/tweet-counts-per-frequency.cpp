class TweetCounts {
private:
    map<string, vector<int>> mp;
public:

    TweetCounts() {
    }
    
    void recordTweet(string tweetName, int time) {
        mp[tweetName].push_back(time);
    }
    
    vector<int> getTweetCountsPerFrequency(string freq, string tweetName, int startTime, int endTime) {
        int interval = 60;
        if(freq=="hour"){
            interval=interval*60;
        }
        if(freq=="day"){
            interval=interval*60*24;
        }
        vector<int>res;
        for(int i=0;i<=(endTime-startTime)/interval;i++){
            res.push_back(0);
        }
        vector<int>times = mp[tweetName];
        for(int time : times){
            if(startTime<=time && time<=endTime){
                int index = (time-startTime)/interval;
                res[index]++;
            }
        }
        return res;
    }
};

/**
 * Your TweetCounts object will be instantiated and called as such:
 * TweetCounts* obj = new TweetCounts();
 * obj->recordTweet(tweetName,time);
 * vector<int> param_2 = obj->getTweetCountsPerFrequency(freq,tweetName,startTime,endTime);
 */