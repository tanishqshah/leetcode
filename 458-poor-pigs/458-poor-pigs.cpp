class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int x=minutesToTest/minutesToDie;
        int count=0;
        while(pow(x+1,count)<buckets)
            count++;
        return count;
    }
};