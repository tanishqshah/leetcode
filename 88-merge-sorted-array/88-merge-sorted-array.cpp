class Solution {
public:
    void merge(vector<int>& a, int x, vector<int>& b, int y) {
        int i=x-1;
        int j=y-1;
        int index=x+y-1;
        while(i>=0 && j>=0)
        {
            if(a[i] >= b[j])
                a[index--]=a[i--];
            else
                a[index--]=b[j--];
        }
        while(i>=0)
            a[index--]=a[i--];
        while(j>=0)
            a[index--]=b[j--];
        
    }
};